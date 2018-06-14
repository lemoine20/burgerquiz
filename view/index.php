<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body>
		<img id="logo-big" src="res/logo.svg" alt="Burger Quiz en ligne">
		<div style="text-align:center;">
			<a class="button bgblue grow"  href="index.php?do=connect">
				Se Connecter
			</a>
			<a class="button bggreen grow" href="index.php?do=subscribe">
				S'inscrire
			</a>
		</div>
		<img id="img" src="res/sprites.png" hidden></img>
		<canvas id="burger" width="450" height="450"></canvas>
		<script src="script/Box2D.min.js"></script>
		<script src="script/burger.js"></script>
	</body>
</html>