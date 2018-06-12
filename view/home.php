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
		<div align="center">
			<form role="form" method="get" action="index.php?do=home">
				<select id="filter" class="inline" name="filter">
					<option value="pseudo" selected>Pseudo</option>
					<option value="theme">Theme</option>
					<option value="rank">Rank</option>
					<option value="score">Score</option>
					<option value="temps">Temps</option>
				</select>
				<div class="inline">
					<input id="pseudoInput" type="text" name="pseudo" class="form-control" placeholder="Pseudo">
				</div>
				<div class="inline">
					<input id="themeInput" style="display:none;" type="text" name="theme" class="form-control" placeholder="Thème">
				</div>
				<div class="inline">
					<input id="minInput" style="display:none;" type="text" name="min" class="form-control input-small" placeholder="min">
				</div>
				<div class="inline">
					<input id="maxInput" style="display:none;" type="text" name="max" class="form-control" placeholder="max">
				</div>
				<button type="submit" class="inline small-button bggreen">Chercher</button>
			</form>
		</div>
		<script src="script/filter.js"></script>
		<table class="scoreboard" cellspacing="0">
			<tr>
				<th>Rank</th>
				<th>Pseudo</th>
				<th>Theme</th>
				<th>Score</th>
				<th>Temps</th>
			</tr>
			<tr>
				<td>#1</td>
				<td>Toto</td>
				<td>Politique</td>
				<td>5/9</td>
				<td>00:14</td>
			</tr>
			<tr>
				<td>#1</td>
				<td>Toto</td>
				<td>Politique</td>
				<td>5/9</td>
				<td>00:14</td>
			</tr>
		</table>
	</body>
</html>