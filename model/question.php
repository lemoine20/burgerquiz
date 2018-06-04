<?php
class Question {
	private $id, $id_category, $label1, $label2;
	private function __construct($id, $id_categorie, $label1, $label2){
		$this->id = $id;
		$this->id_categorie = $id_categorie;
		$this->label1 = $label1;
		$this->label2 = $label2;
	}
	
	public function getLabel1(){
		return $this->label1;
	}
	public function getLabel2(){
		return $this->label2;
	}
	public function getCategorie($dbh){
		return Categorie::get($dbh, $id_categorie);
	}
	public function getPropositions($dbh){
		return Proposition::get($dbh, NULL, $id);
	}
	
	public static function get($dbh, $id=NULL, $id_categorie=NULL){
		//Generate conditions
		$conditions = "1 ";
		if(isset($id))				$conditions .= " AND `id_question` = :id";
		if(isset($id_categorie))	$conditions .= " AND `id_categorie` = :categorie";
		//Prepare querry
		$q = $dbh->prepare("SELECT `id_question` as id, `label1`, `label2`, `id_categorie` FROM `question` WHERE ".$conditions.";");
		//Bind values
		if(isset($id))				$q->bindValue(':id', $id, PDO::PARAM_INT);
		if(isset($id_categorie))	$q->bindValue(':categorie', $id_categorie, PDO::PARAM_INT);
		//Execute querry
		$q->execute();
		$result = $q->fetchAll();
		//var_dump($result);
		//Retrieve data into an array of objects 
		$questions = array();
		foreach ($result as $k => $question)
			array_push($questions,new Question($question["id"],$question["id_categorie"],$question["label1"],$question["label2"]));
		return $questions;
	}
}
?>