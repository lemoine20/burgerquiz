<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div>
			<a href="index.php?do=home">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow inv title">Accueil</p>
			<div class="ctl-div">
				<a class="bgblue ctl-button" href="index.php?do=parametres">
					<img src="res/settings.png" style="height:5vh;" alt="Paramètres">
				</a>
				<a class="bgred ctl-button" href="index.php?do=disconnect">
					<img src="res/logout.png" style="height:5vh;" alt="Se Déconnecter">
				</a>
			</div>
		</div>
		<div align="center">
			<a class="bgblue small-button grow" href="index.php?do=existante">Parties Existantes</a>
			<a class="bggreen small-button grow" href="index.php?do=creation">Nouvelle Partie</a>
		</div>
	</body>
</html>