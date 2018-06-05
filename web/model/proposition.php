<?php
class Proposition {
	private $id, $id_question, $nom, $reponse;
	private function __construct($id, $id_question, $nom, $reponse){
		$this->id = $id;
		$this->id_question = $id_question;
		$this->nom = $nom;
		$this->reponse = $reponse;
	}
	
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
		return Question::get($dbh, $id_question);
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
		$result = $q->fetchAll();
		//var_dump($result);
		//Retrieve data into an array of objects 
		$propositions = array();
		foreach ($result as $k => $proposition)
			array_push($propositions,new Proposition($proposition["id"], $proposition["id_question"], $proposition["nom"], $proposition["reponse"]));
		return $propositions;
	}
}
?>