<?php
/**
 * \file index.php
 * \brief Page d'accès au site (structure MVC2).
 * \author Clément C.
 */
 
	if(!isset($_GET["do"]))
		$_GET["do"] = "home";
	$public_area = array("connect", "subscribe", "activate");
	
	include "model/sql.php";
	include "model/utilisateur.php";
	include "model/partie.php";
	include "model/partieJouee.php";
	include "model/categorie.php";
	include "model/question.php";
	include "model/proposition.php";
	include "model/actions.php";
	
	global $config, $dbh, $fail;
	$fail = false;
	$dbh = initDB();
	session_start();
	
	
	if(isset($_POST["usr"]) && isset($_POST["pwd"]) && isset($_POST["mail"])){
		//Subscribe: try to connect to the account and redirect to the activation if it succeed 
		$fail = subscribe($dbh, $_POST["usr"], $_POST["pwd"], $_POST["mail"]);
		$_GET["do"] = $fail ? "subscribe" : "activate";
	}else if(isset($_POST["usr"]) && isset($_POST["pwd"])){
		//Connect: try to connect to the account and redirect to home if it succeed 
		$fail = connect($dbh, $_POST["usr"], $_POST["pwd"]);
		$_GET["do"] = $fail ? "connect" : "home";
	}else if(isset($_POST["code"])){
		//Activate: activate user account and redirect to the home
		$fail = $_SESSION["usr"]->activate($dbh, $_POST["code"]);
		$_GET["do"] = $fail ? "activate" : "home";
	}else if(!in_array($_GET["do"], $public_area) && (!isset($_SESSION["usr"]) || $_SESSION["usr"]->getCode() != 0)){
		//Not connected and accessing forbidden page: redirect to index view
		$_GET["do"] = "disconnect";
	}else if(isset($_POST["nusr"]) && isset($_POST["npwd"])){
		//Modify user informations
		modify($dbh, $_POST["nusr"], $_POST["npwd"]);
	}else if(isset($_POST["categorie"]) && isset($_POST["count"])){
		//Create and generate a new partie
		Partie::clear($dbh, $_SESSION["usr"]);
		$partie = new Partie;
		$categorie = Categorie::get($dbh, NULL, $_POST["categorie"]);
		$categorie = sizeof($categorie) == 1 ? $categorie[0] : NULL;
		$count = gettype($_POST["count"]) == "integer" ? $count : NULL;
		if(isset($_POST["count"]) && $_POST["count"] < 3){
			$fail = "Le nombre de propositions par partie doit être supérieur à 2.";
			$_GET["do"] = "creation";	
		}else if(isset($_POST["count"]) && $_POST["count"] > 9){
			$fail = "Le nombre de propositions par partie ne peut exceder 9.";
			$_GET["do"] = "creation";	
		}else if(!$partie->generate($dbh, $_POST["count"], $categorie)){
			$fail = "Echec de la génération.";
			$_GET["do"] = "creation";
		}
	}else if(isset($_GET["id_partie"])){
		//Load an existing partie
		Partie::clear($dbh, $_SESSION["usr"]);
		$partie = Partie::get($dbh, $_GET["id_partie"]);
		if(!isset($partie) || sizeof($partie)!=1){
			$fail = "Erreur: partie innexistante.";
			$_GET["do"] = "existante";
		}else
			$partie = $partie[0];
	}else if(isset($_GET["answers"])){
		//Finish a partie, count score and duration 
		global $result;
		$result = Partie::finish($dbh, $_SESSION["usr"]);
		if(!isset($result)){
			$fail = "Erreur dans la comptabilisation des points.";
			$_GET["do"] = "home";
		}
	}else if($_GET["do"] == "unsubscribe"){
		//Unsubscribe: delete user account and redirect to index view
		$_SESSION["usr"]->del($dbh);
		$_GET["do"] = "disconnect";
	}
	
	if($_GET["do"] == "home" || $_GET["do"] == "existante"){
		//Get and filter scoreboards
		global $parties;
		
		if(!isset($_GET["filter"])) $_GET["filter"] = "";
		if(!isset($_GET["pseudo"])) $_GET["pseudo"] = "";
		if(!isset($_GET["theme"])) $_GET["theme"] = "";
		
		if($_GET["filter"]==="score" || $_GET["filter"]==="temps")
			$parties = PartieJouee::get($dbh, NULL, NULL, NULL,
				$_GET["filter"], $_GET["min"], $_GET["max"]);
		else if($_GET["filter"]==="pseudo" || $_GET["filter"]==="theme")
			$parties = PartieJouee::get($dbh, NULL, 
				$_GET["filter"]==="pseudo"?$_GET["pseudo"]."%":NULL,
				$_GET["filter"]==="theme"?$_GET["theme"]."%":NULL);
		else
			$parties = PartieJouee::get($dbh);
		
		if($_GET["filter"]!="rank"){
			$_GET["min"] = "1";
			$_GET["max"] = "10";
		}
	}
	
	switch($_GET["do"]){
		case "connect": require 'view/connect.php'; break;
		case "subscribe": require 'view/subscribe.php'; break;
		case "activate": require 'view/activate.php'; break;
		case "home": require 'view/home.php'; break;
		case "parametres": require 'view/parametres.php'; break;
		case "existante": require 'view/existante.php'; break;
		case "creation": require 'view/creation.php'; break;
		case "jeu":
			$partie->start($dbh, $_SESSION["usr"]);
			require 'view/jeu.php';
			break;
		case "finish": require 'view/finish.php'; break;
		case "disconnect":
			session_unset();
			session_destroy();
			require 'view/index.php';
			break;
		default: require 'view/404.php'; break;
	}
?>