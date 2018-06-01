<?php
	if(!isset($_GET["do"])){
		require 'view/index.php';
		exit;
	}
	switch($_GET["do"]){
		case "connect": require 'view/connect.php'; break;
		case "subscribe": require 'view/subscribe.php'; break;
		case "activate": require 'view/activate.php'; break;
		case "home": require 'view/home.php'; break;
		default: require 'view/404.php'; break;
	}
?>