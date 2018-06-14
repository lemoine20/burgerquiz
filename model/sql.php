<?php
/**
 * \file sql.php
 * \brief Script de connexion à la bdd.
 * \author Clément C.
 */
 
/**
 * \fn ins ($dbh)
 * \brief Se connecte à la base de donnée.
 * \return $dbh Objet PDO de connexion à la base de donnée.
 */	
function initDB(){
	global $config;
	$config = parse_ini_file('../pwd.ini');
	try {
		$dbh = new PDO('mysql:DB_SERVER='.$config['servername'].';dbname='.$config['dbname'], $config['username'], $config['password']);
	} catch (PDOException $e) {
		var_dump("error");
		die("Error connecting to the database:<br/>".$e->getMessage());
	}
	return $dbh;
}
?>