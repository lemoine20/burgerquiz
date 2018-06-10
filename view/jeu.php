<!DOCTYPE html>
<html>
	<?php include "view/head.php";?>
	<body style="background-color:black;">
		<p id="progress" class="enter inv green"></p>
		<p id="timer" class="enter inv green"></p>
		<p id="proposition" style="padding-top:10vh; display:none;"></p>
		<p id="question" class="enter">
			<button id="label1" class="reponse inv small-title red"></button>,<br/>
			<button id="label2" class="reponse inv small-title yellow"></button><br/>
			<button id="both" class="reponse inv small-title blue">ou les deux ?</button>
		</p>
		<video id="intro">
			<source src="res/Sel_ou_Poivre.mp4" type="video/mp4">
		</video>
		<p id="countdown" class="enter inv"></p>
		<script>var questions = <?php
			global $questionnaire;
			echo json_encode($questionnaire);
		?></script>
		<script src="script/game.js"></script> 
	</body>
</html>