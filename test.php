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
	include "model/sql.php";
	$dbh = initDB();
	
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
	
	/*****************************/
	/***Utilisateur class tests***/
	/*****************************/
	head("Classe Utilisateur");
	include "model/utilisateur.php";
	
	$user = new Utilisateur(NULL,"test_nom","test_mdp","test_mail",42);
	test("construct",$user->getNom() == "test_nom" && $user->getMail() === "test_mail"
					&& $user->getMdp() == "test_mdp" && $user->getCode() == 42);
	
	$count = sizeof(Utilisateur::get($dbh));
	$user->ins($dbh);
	test("insert", sizeof(Utilisateur::get($dbh)) == 1 + $count);
	
	$results = Utilisateur::get($dbh, NULL,"test_nom","test_mdp","test_mail",42);
	test("get",sizeof($results) == 1);
	test("getId",$results[0]->getId() == $user->getId());
	test("getNom",$results[0]->getNom() == "test_nom");
	test("getMail",$results[0]->getMail() === "test_mail");
	test("getMdp",$results[0]->getMdp() == "test_mdp");
	test("getCode",$results[0]->getCode() == 42);
	
	$count = sizeof(Utilisateur::get($dbh));
	$user->del($dbh);
	test("delete",sizeof(Utilisateur::get($dbh)) == $count - 1);
	foot();
?>
</table>