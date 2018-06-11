<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div style="margin-bottom:10vh">
			<a href="index.php?do=home">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow inv small-title">Nouvelle Partie</p>
			<div class="ctl-div">
				<a class="bgred ctl-button" href="index.php?do=home">
					<img src="res/back.png" style="height:5vh;" alt="Retour">
				</a>
				<a class="bgblue ctl-button" href="index.php?do=parametres">
					<img src="res/settings.png" style="height:5vh;" alt="Paramètres">
				</a>
				<a class="bgred ctl-button" href="index.php?do=disconnect">
					<img src="res/logout.png" style="height:5vh;" alt="Se Déconnecter">
				</a>
			</div>
		</div>
		<form action="inex.php?do=jeu" method="POST" style="text-align:center;">
			<div id="selector">
				<p class="inv" style="font-size: 9vh;">Categorie: </p>
				<?php
					global $categories;
					foreach ($categories as $k => $categorie){
						$nom = $categorie->getNom();
						echo '<p>';
						echo '<input class="radio" type="radio" name="categorie" value="'.$nom.'" '.($k==0?'checked':'').'>';
						echo '<label for="'.$nom.'">'.$nom.'</label><br>';
						echo '</p>';
					}
				?>
			</div>
			<div style="display:inline-block; width:30vw;vertical-align:top;">
				<label for="count">Propositions par question:</label>
				<input type="text" name="count" style="width:6vh;" value="3">
				<input type="submit" class="bggreen button grow" style="float:right;" value="Jouer">
			</div>
		</form>
	</body>
</html>