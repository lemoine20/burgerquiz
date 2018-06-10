<?php
class Question {
	private $id, $id_category, $label1, $label2;
	
	public function getId(){
		return $this->id;
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
		return Proposition::get($dbh, NULL, $this->id);
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
		return $q->fetchAll(PDO::FETCH_CLASS, "Question");
	}
	public static function generate($dbh, $categorie = NULL){
		if(!isset($categorie))
			$categorie = Categorie::generate($dbh);
		$questions = $categorie->getQuestions($dbh);
		shuffle($questions);
		return array_slice($questions, 0, 3);
	}
}