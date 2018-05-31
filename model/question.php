<?php
include "proposition.php";
class Question {
	private $id, $categorie, $label_1, $label_2, $propositions;
	public function __construct($id, $categorie, $label_1, $label_2, $propositions = array()){
		$this->id = $id;
		$this->categorie = $categorie;
		$this->label_1 = $label_1;
		$this->label_2 = $label_2;
		$this->propositions = $propositions;
	}
	public function getCategory(){
		return $this->categorie;
	}
	public function getStatement_1(){
		return $this->label_1;
	}
	public function getStatement_2(){
		return $this->label_2;
	}
	public function getPropositions(){
		return $propositions;
	}
	public function addProposition($proposition, $reponse){
		if(!isset($proposition) || !isset($reponse))
			return;
		array_push($this->propositions, $proposition);
		array_push($this->reponses, $reponse);
	}
	public static function get($dbh, $id = NULL, $categorie = NULL, $label_1 = NULL, $label_2 = NULL){
		//Generate conditions
		$conditions = "1 ";
		if(isset($id))			$conditions .= " AND `id` = :id";
		if(isset($categorie))	$conditions .= " AND `categorie` = :categorie";
		if(isset($label_1))	 	$conditions .= " AND `label_1` = :label_1";
		if(isset($label_2))	 	$conditions .= " AND `label_2` = :label_2";
		//Prepare querry
		$q = $dbh->prepare("".$conditions.";");
		//Bind values
		if(isset($id))			$q->bindValue(':id', $id, PDO::PARAM_INT);
		if(isset($categorie))	$q->bindValue(':categorie', $categorie, PDO::PARAM_STR);
		if(isset($label_1))	 	$q->bindValue(':label_1', $label_1, PDO::PARAM_STR);
		if(isset($label_2))	 	$q->bindValue(':label_2', $label_2, PDO::PARAM_STR);
		//Execute querry
		$q->execute();
		$result = $q->fetchAll();
		//var_dump($result);
		//Retrieve data into an array of objects 
		$questions = array();
		foreach ($result as $k => $question)
			array_push($questions,new Question($question["id"],$question["categorie"],
				$question["label_1"],$user["label_2"],Proposition::get($dbh, NULL, $question["id"]));
		return $questions;
	}
}
?>