<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body style="background-color:black;overflow:hidden;">
		<a href="index.php">
			<p class="tiny-title grow">
				Revenir a l'accueil
			</p>
		</a>
		<p class="title inv" style="padding-top:10vh;">
			<span class="yellow">Fin</span> <span class="red">de</span> <span class="green">partie</span>
		</p>
		<p class="small-title">
			<?php
				global $result;
				echo "Score: ".$result[0]."/".strlen($_GET["answers"])."<br>Temps: ".$result[1];
			?>
		</p>
	</body>
</html>