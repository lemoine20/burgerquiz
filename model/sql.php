<?php
	function initDB(){	
		$pwd = parse_ini_file('../pwd.ini');
		try {
			$dbh = new PDO('mysql:DB_SERVER='.$pwd['servername'].';dbname='.$pwd['dbname'], $pwd['username'], $pwd['password']);
		} catch (PDOException $e) {
			var_dump("error");
			die("Error connecting to the database:<br/>".$e->getMessage());
		}
		return $dbh;
	}
?>