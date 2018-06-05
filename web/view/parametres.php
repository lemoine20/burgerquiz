<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div style="margin-bottom:20vh;">
			<a href="index.php?do=home">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow inv title">Parametres</p>
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
		<form action="index.php?do=home" method="POST">
			<table align="center">
				<tr>
					<td><label for="usr" class="red">Pseudo </label></td>
					<td><input type="text" name="usr" value="<?php echo $_SESSION["usr"]->getNom();?>"></input></td>
				</tr>
				<tr>
					<td><label for="pwd" class="yellow">Password </label></td>
					<td><input type="password" name="pwd"></input></td>
				</tr>
				<tr>
					<td colspan="2"><input type="submit" class="button bggreen" style="float:right;" value="Modifier"></td>
				</tr>
			</table>
		</form>
	</body>
</html>