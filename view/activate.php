<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div style="margin-bottom: 15vh;">
			<a href="index.php">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow title inv">Activation</p>
		</div>
		<form action="index.php?do=home" method="POST">
			<table align="center">
				<tr>
					<td><label for="code" class="green">Code</label></td>
					<td><input type="text" id="code" name="code"></input></td>
				</tr>
				<tr>
					<td colspan="2"><input type="submit" class="button bggreen grow" style="float:right;" value="Valider"></td>
				</tr>
			</table>
		</form>
	</body>
</html>