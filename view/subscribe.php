<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<style>	label, input {font-size: 7vh;} </style>
		<div style="margin-bottom:5vh;">
			<a href="index.php">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow title inv">Inscription</p>
		</div>
		<form action="index.php?do=activate" method="POST" onsubmit="return sub()">
			<table align="center">
				<tr>
					<td><label for="usr" class="red">Pseudo </label></td>
					<td><input id="usr" type="text" name="usr"></input></td>
				</tr>
				<tr>
					<td><label for="pwd" class="yellow">Password </label></td>
					<td><input id="pwd" type="password" name="pwd"></input></td>
				</tr>
				<tr>
					<td><label for="pwdv" class="red">Confirmation </label></td>
					<td><input id="pwdv" type="password" name="pwdv"></input></td>
				</tr>
				<tr>
					<td><label for="mail" class="yellow">Mail </label></td>
					<td><input id="mail" type="mail" name="mail"></input></td>
				</tr>
				<tr>
					<td><a class="button bgred grow"  href="index.php">Annuler</a></td>
					<td><input type="submit" class="button bggreen grow" style="float:right;" value="S'inscrire"></td>
				</tr>
			</table>
		</form>
		<script src="script/form.js"></script>
	</body>
</html>