<?php
	function connect ($dbh, $usr, $pwd){
		global $config;
		$search = Utilisateur::get($dbh, NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]));
		if(sizeof($search) != 1)
			return true;
		$_SESSION["usr"] = $search[0];
		return false;
	}

	function subscribe ($dbh, $usr, $pwd, $mail){
		//Check same name
		if(sizeof(Utilisateur::get($dbh, NULL, $usr, NULL, NULL, NULL)) != 0)
			return true;
		//Check same mail
		if(sizeof(Utilisateur::get($dbh, NULL, NULL, NULL, $mail, NULL)) != 0)
			return true;
		global $config;
		$_SESSION["usr"] = new Utilisateur(NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]), $mail);
		$_SESSION["usr"]->ins($dbh);
		mail($_POST["mail"] ,"Bienvenue à Burger Quiz", "Nous vous souhaitons la bienvenue à Burger Quiz,".
										"\nVoici votre code d'activation :".$_SESSION["usr"]->getCode().".","Content-Type: text/html; charset=UTF-8");
		return false;
	}
	
	function modify ($dbh, $usr, $pwd){
		$_SESSION["usr"]->del($dbh);
		$_SESSION["usr"] = new Utilisateur(NULL, $usr, hash_hmac("sha256",$pwd,$config["hashkey"]), $_SESSION["usr"]->getMail(), 0);
		$_SESSION["usr"]->ins($dbh);
	}
?>