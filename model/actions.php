<?php
/**
 * \file actions.php
 * \brief Fonctions CRUD utilisateur.
 * \author Clément C.
 */

/**
 * \fn connect ($dbh, $usr, $pwd)
 * \brief Fonction de connexion utilisateur.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $usr Pseudo de l'utilisateur entré sur le site.
 * \param $pwd Mot de passe de l'utilisateur entré sur le site.
 * \return Booléan true si la connexion a échoué et false is elle a réussit.
 */
	function connect ($dbh, $usr, $pwd){
		global $config;
		$search = Utilisateur::get($dbh, NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]));
		if(sizeof($search) != 1)
			return "Erreur de connexion";
		$_SESSION["usr"] = $search[0];
		return false;
	}

/**
 * \fn subscribe ($dbh, $usr, $pwd, $mail)
 * \brief Fonction d'inscription utilisateur.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $usr Pseudo de l'utilisateur entré sur le site.
 * \param $pwd Mot de passe de l'utilisateur entré sur le site.
 * \param $mail Adresse mail de l'utilisateur entrée sur le site.
 * \return Booléan true si l'inscription a échoué et false is elle a réussit.
 */
	function subscribe ($dbh, $usr, $pwd, $mail){
		//Check same name
		if(sizeof(Utilisateur::get($dbh, NULL, $usr, NULL, NULL, NULL)) != 0)
			return "Un compte utilise déjà ce pseudo.";
		//Check same mail
		if(sizeof(Utilisateur::get($dbh, NULL, NULL, NULL, $mail, NULL)) != 0)
			return "Un compte utilise déjà cette addresse mail.";
		global $config;
		$_SESSION["usr"] = new Utilisateur(NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]), $mail);
		$_SESSION["usr"]->ins($dbh);
		mail($_POST["mail"] ,"Bienvenue à Burger Quiz", "Nous vous souhaitons la bienvenue à Burger Quiz,".
										"\nVoici votre code d'activation :".$_SESSION["usr"]->getCode().".","Content-Type: text/html; charset=UTF-8");
		return false;
	}

/**
 * \fn modify ($dbh, $usr, $pwd)
 * \brief Fonction de modification de compte utilisateur.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $usr Nouveau pseudo entré sur le site.
 * \param $pwd Nouveau mot de passe entré sur le site.
 */	
	function modify ($dbh, $usr, $pwd){
		$_SESSION["usr"]->del($dbh);
		$_SESSION["usr"] = new Utilisateur(NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]), $_SESSION["usr"]->getMail(), 0);
		$_SESSION["usr"]->ins($dbh);
	}
?>