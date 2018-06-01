<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div style="margin-bottom: 15vh;">
			<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			<p class="yellow title inv">Connexion</p>
		</div>
		<form action="index.php?do=connect" method="POST">
			<table align="center">
				<tr>
					<td><label for="usr" class="red">Pseudo </label></td>
					<td><input type="text" name="usr"></input></td>
				</tr>
				<tr>
					<td><label for="pwd" class="yellow">Password </label></td>
					<td><input type="password" name="pwd"></input></td>
				</tr>
				<tr>
					<td><a class="button bgred grow"  href="index.php">Annuler</a></td>
					<td><input type="submit" class="button bggreen grow" style="float:right;" value="Se Connecter"></td>
				</tr>
			</table>
		</form>
	</body>
</html>