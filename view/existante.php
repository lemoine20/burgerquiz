<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<div>
			<a href="index.php?do=home">
				<img id="logo-small" src="res/logo.svg" alt="Burger Quiz en ligne">
			</a>
			<p class="yellow inv small-title">Partie Existante</p>
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
			<div align="center" style="margin-top:10vh;">
				<form role="form" method="get" action="index.php">
					<input hidden name="do" value="existante">
					<select id="filter" class="inline" name="filter">
						<option value="theme" selected>Theme</option>
						<option value="pseudo">Pseudo</option>
						<option value="score">Score</option>
						<option value="temps">Temps</option>
					</select>
					<div class="inline">
						<input id="themeInput" type="text" name="theme" class="form-control" placeholder="Thème">
					</div>
					<div class="inline">
						<input id="pseudoInput" style="display:none;" type="text" name="pseudo" class="form-control" placeholder="Pseudo">
					</div>
					<div class="inline">
						<input id="minInput" style="display:none;" type="text" name="min" class="form-control input-small" placeholder="min">
					</div>
					<div class="inline">
						<input id="maxInput" style="display:none;" type="text" name="max" class="form-control" placeholder="max">
					</div>
					<button type="submit" class="inline small-button bgblue">Filtrer</button>
				</form>
			</div>
			<script src="script/filter.js"></script>
			<table class="scoreboard" cellspacing="0">
				<tr>
					<th>Date</th>
					<th>Theme</th>
					<th>Record</th>
					<th>Temps</th>
					<th>Pseudo</th>
					<th>Jouer</th>
				</tr>
				<?php
					foreach($parties as $i => $partie){
						if($i+1 < $_GET["min"])
							continue;
						if($i+1 > $_GET["max"])
							break;
						echo "<tr>";
						echo "<td>".$partie->getDate()."</td>";
						echo "<td>".$partie->getNomCategorie()."</td>";
						echo "<td>".$partie->getScore()."</td>";
						echo "<td>".$partie->getTemps()."</td>";
						echo "<td>".$partie->getNomUtilisateur()."</td>";
						echo '<td>';
						if(sizeof(PartieJouee::get($dbh,$partie,$_SESSION["usr"]->getNom())) === 0)
							echo '<a class="small-button bggreen" href="index.php?do=jeu&id_partie='.$partie->getId().'">►</a>';
						else
							echo '✓';
						echo '</td>';
						echo "</tr>";
					}
				?>
			</table>
		</div>
	</body>
</html>