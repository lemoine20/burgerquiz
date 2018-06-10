<style>
	table, td, th {
		text-align: center;
		border: 1px solid black;
		border-collapse: collapse;
		padding-right: 10px;
		padding-left: 10px;
	}
	div {
		display: inline-block;   
		vertical-align: top;
		padding-right: 10px;
	}
	th {
		background-color: lightblue;
	}
	.success {
		background-color: lightgreen;
	}
	.failed {
		background-color: lightsalmon;
	}
</style>

<?php
	function head($name){
		echo '<div><table>';
		echo "<tr>";
		echo '<th colspan="2">'.$name."</th>";
		echo "</tr>";
	}
	
	function foot(){
		echo "</table></div>";
	}
	
	function test($name, $success){
		echo '<tr class="'.($success?"success":"failed").'">';
		echo "<td>".$name."</td>";
		echo "<td>".($success?"success":"failed")."</td>";
		echo "</tr>";
	}
?>

<?php
	include "model/sql.php";
	include "model/utilisateur.php";
	include "model/partie.php";
	include "model/categorie.php";
	include "model/question.php";
	include "model/proposition.php";
	$dbh = initDB();
	
	/**********************/
	/***Test preparation***/
	/**********************/
	head("Preparations");
	test("insert utilisateur", $dbh->query("INSERT INTO `utilisateur`(`nom`, `mots_de_passe`, `mail`, `code_d_activation`) VALUES ('test_nom','test_mdp','test_mail',42)"));
	$id_categorie = $dbh->lastInsertId();
	test("insert categorie", $dbh->query("INSERT INTO `categorie`(`nom_categorie`) VALUES ('test_categorie')"));
	$id_categorie = $dbh->lastInsertId();
	test("insert question", $dbh->query("INSERT INTO `question`(`label1`, `label2`, `id_categorie`) VALUES ('test_label1', 'test_label2', ".$id_categorie.")"));
	$id_question = $dbh->lastInsertId();
	test("insert proposition", $dbh->query("INSERT INTO `proposition` (`nom_proposition`, `reponse`, `id_question`) VALUES ('test_proposition', 1, ".$id_question.")"));
	$id_proposition = $dbh->lastInsertId();
	foot();
	
	try {
		/*****************************/
		/***Utilisateur class tests***/
		/*****************************/
		head("Classe Utilisateur");
		
		$user = new Utilisateur(NULL,"test_nom1","test_mdp1","test_mail1",42);
		test("construct",$user->getNom() == "test_nom1" && $user->getMail() === "test_mail1"
						&& $user->getMdp() == "test_mdp1" && $user->getCode() == 42);
		
		$count = sizeof(Utilisateur::get($dbh));
		$user->ins($dbh);
		test("insert", sizeof(Utilisateur::get($dbh)) == 1 + $count);
		
		$results = Utilisateur::get($dbh, NULL,"test_nom1","test_mdp1","test_mail1",42);
		test("get",sizeof($results) == 1);
		test("getId",$results[0]->getId() == $user->getId());
		test("getNom",$results[0]->getNom() == "test_nom1");
		test("getMail",$results[0]->getMail() === "test_mail1");
		test("getMdp",$results[0]->getMdp() == "test_mdp1");
		test("getCode",$results[0]->getCode() == 42);
		
		$count = sizeof(Utilisateur::get($dbh));
		$user->del($dbh);
		test("delete",sizeof(Utilisateur::get($dbh)) == $count - 1);
		
		foot();
		
		/***************************/
		/***Categorie class tests***/
		/***************************/
		head("Classe Categorie");
		
		$r1 = Categorie::get($dbh, $id_categorie);
		$r2 = Categorie::get($dbh, NULL, "test_categorie");
		$r3 = Categorie::get($dbh, $id_categorie, "test_categorie");
		test("get", sizeof($r1) == 1 && $r1 == $r2 && $r2 == $r3);
		$results = $r1;
		test("getNom",$results[0]->getNom() == "test_categorie");
		
		foot();
		
		/**************************/
		/***Question class tests***/
		/**************************/
		head("Classe Question");
		
		$r1 = Question::get($dbh, $id_question);
		$r2 = Question::get($dbh, NULL, $id_categorie);
		$r3 = Question::get($dbh, $id_question, $id_categorie);
		test("get", sizeof($r1) == 1 && $r1 == $r2 && $r2 == $r3);
		$results = $r1;
		test("getLabel1",$results[0]->getLabel1() == "test_label1");
		test("getLabel2",$results[0]->getLabel2() == "test_label2");	
		
		foot();
	
		/*****************************/
		/***Proposition class tests***/
		/*****************************/
		head("Classe Proposition");
		
		$r1 = Proposition::get($dbh, $id_proposition);
		$r2 = Proposition::get($dbh, NULL, $id_question);
		$r3 = Proposition::get($dbh, $id_proposition, $id_question);
		test("get", sizeof($r1) == 1 && $r1 == $r2 && $r2 == $r3);
		$results = $r1;
		test("getId",$results[0]->getId() == $id_proposition);
		test("getNom",$results[0]->getNom() == "test_proposition");
		test("getReponse",$results[0]->getReponse() == 1);
		
		foot();
		
		//clean proposition/question/categorie (to avoid being picked up during generation)
		$dbh->query("DELETE FROM `proposition` WHERE nom_proposition = 'test_proposition';");
		$dbh->query("DELETE FROM `question` WHERE label1 = 'test_label1' AND label2 = 'test_label2';");
		$dbh->query("DELETE FROM `categorie` WHERE nom_categorie = 'test_categorie';");
		
		/************************/
		/***Partie class tests***/
		/************************/
		head("Classe Partie");
		
		$partie = new Partie;
		test("construct",isset($partie));
		
		test("generate", $partie->generate($dbh));
		$result = $partie->getGeneration();
		test("generation", sizeof($result) == 3 && sizeof($result[0]) == 2+3 
						&& sizeof($result[1]) == 2+3 && sizeof($result[2]) == 2+3);
		
		$partie->del($dbh);
		
		foot();
		
	} finally {
		/**************/
		/***Clean up***/
		/**************/
		$dbh->query("DELETE FROM `utilisateur` WHERE nom = 'test_nom';");
		$dbh->query("DELETE FROM `proposition` WHERE nom_proposition = 'test_proposition';");
		$dbh->query("DELETE FROM `question` WHERE label1 = 'test_label1' AND label2 = 'test_label2';");
		$dbh->query("DELETE FROM `categorie` WHERE nom_categorie = 'test_categorie';");
	}
?>
</table>