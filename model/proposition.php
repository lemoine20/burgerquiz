<?php
class Proposition {
	private $id, $id_question, $nom, $reponse;
	
	public function getId(){
		return $this->id;
	}
	public function getNom(){
		return $this->nom;
	}
	public function getReponse(){
		return $this->reponse;
	}
	public function getQuestion($dbh){
		return Question::get($dbh, $this->id_question)[0];
	}
	
	public static function get($dbh, $id = NULL, $id_question = NULL){
		//Generate conditions
		$conditions = "1";
		if(isset($id))			$conditions .= " AND `id_proposition` = :id";
		if(isset($id_question))	$conditions .= " AND `id_question` = :id_question";
		//Prepare querry
		$q = $dbh->prepare("SELECT id_proposition as id, id_question, nom_proposition as nom, reponse
							FROM proposition WHERE ".$conditions.";");
		//Bind values
		if(isset($id))			$q->bindValue(':id', $id, PDO::PARAM_INT);
		if(isset($id_question))	$q->bindValue(':id_question', $id_question, PDO::PARAM_INT);
		//Execute querry
		$q->execute();
		return $q->fetchAll(PDO::FETCH_CLASS, "Proposition");
	}
	public static function generate($dbh, $question, $compte = 3){
		$questions = $question->getPropositions($dbh);
		shuffle($questions);
		return array_slice($questions, 0, $compte);
	}
}