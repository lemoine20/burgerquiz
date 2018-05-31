<?php
	if(!isset($_GET["do"])){
		require 'view/home.php';
		exit;
	}
	switch($_GET["do"]){
		default: require 'view/404.php'; break;
	}
?>