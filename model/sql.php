<?php
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