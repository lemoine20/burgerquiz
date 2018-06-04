<?php
	if(!isset($_GET["do"]))
		$_GET["do"] = "home";
	$public_area = array("connect", "subscribe", "activate");
	
	global $config;
	include "model/sql.php";
	include "model/actions.php";
	
	$dbh = initDB();
	session_start();
	
	$fail = false;
	if(isset($_POST["usr"]) && isset($_POST["pwd"]) && isset($_POST["mail"])){
		$fail = subscribe($dbh, $_POST["usr"], $_POST["pwd"], $_POST["mail"]);
		$_GET["do"] = $fail ? "subscribe" : "activate";
	}else if(isset($_POST["usr"]) && isset($_POST["pwd"])){
		$fail = connect($dbh, $_POST["usr"], $_POST["pwd"]);
		$_GET["do"] = $fail ? "connect" : "home";
	}else if(isset($_POST["code"])){
		$fail = activate($dbh, $_POST["code"]);
		$_GET["do"] = $fail ? "activate" : "home";
	}else if(!isset($_SESSION["usr"]) || $_SESSION["usr"]->getCode() != 0){
		if(!in_array($_GET["do"], $public_area))
			$_GET["do"] = "disconnect";
	}else if($_GET["do"] == "unsubscribe"){
		unsubscribe($dbh);
		$_GET["do"] = "disconnect";
	}
	
	switch($_GET["do"]){
		case "connect": require 'view/connect.php'; break;
		case "subscribe": require 'view/subscribe.php'; break;
		case "activate": require 'view/activate.php'; break;
		case "home": require 'view/home.php'; break;
		case "parametres": require 'view/parametres.php'; break;
		case "existante": require 'view/existante.php'; break;
		case "creation":
			global $categories;
			$categories = Categorie::get($dbh);
			require 'view/creation.php';
			break;
		case "jeu": require 'view/jeu.php'; break;
		case "disconnect":
			session_unset();
			session_destroy();
			require 'view/index.php';
			break;
		default: require 'view/404.php'; break;
	}
?>