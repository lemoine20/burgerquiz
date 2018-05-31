<?php
class Proposition {
	private $id, $proposition, $reponse;
	public function __construct($id, $proposition, $reponse){
		$this->id = $id;
		$this->proposition = $proposition;
		$this->reponse = $reponse;
	}
	public function getId(){
		return $this->id;
	}
	public function getProposition(){
		return $this->proposition;
	}
	public function getReponse(){
		return $this->reponse;
	}
	
	public function ins($dbh, $id_question) {
		//Prepare querry
		$q = $dbh->prepare("INSERT INTO `Proposition` (`id_question`, `nom_proposition`) 
								VALUES (:nom, :mdp, :mail, :code);");
		//Bind values
		$q->bindValue(':id_question', $id_question, PDO::PARAM_INT);
		$q->bindValue(':proposition', $this->proposition, PDO::PARAM_STR);
		$q->bindValue(':reponse', $this->reponse, PDO::PARAM_STR);
		//Execute
		$q->execute();
		//Save id
		$this->id = $dbh->lastInsertId();
	}
	public function del($dbh) {
		//Prepare querry
		$q = $dbh->prepare("DELETE FROM `Proposition` WHERE id_proposition = :id;");			
		//Bind value
		$q->bindValue(':id', $this->id, PDO::PARAM_INT);
		//Execute
		$q->execute();
	}
	
	public static function get($id = NULL, $id_question = NULL, $proposition = NULL, $reponse = NULL){
		//Generate conditions
		$conditions = "1";
		if(isset($id))			$conditions .= " AND `id` = :id";
		if(isset($id_question))	$conditions .= " AND `id_question` = :id_question";
		if(isset($proposition))	$conditions .= " AND `proposition` = :proposition";
		if(isset($reponse))		$conditions .= " AND `reponse` = :reponse";
		//Prepare querry
		$q = $dbh->prepare("SELECT id_proposition as id, nom_proposition as proposition, reponse
							FROM proposition WHERE ".$conditions.";");
		//Bind values
		if(isset($id))			$q->bindValue(':id', $id, PDO::PARAM_INT);
		if(isset($id_question))	$q->bindValue(':id_question', $id_question, PDO::PARAM_INT);
		if(isset($proposition))	$q->bindValue(':proposition', $proposition, PDO::PARAM_STR);
		if(isset($reponse))	 	$q->bindValue(':reponse', $reponse, PDO::PARAM_STR);
		//Execute querry
		$q->execute();
		$result = $q->fetchAll();
		//var_dump($result);
		//Retrieve data into an array of objects 
		$propositions = array();
		foreach ($result as $k => $question)
			array_push($propositions,new Proposition($proposition["id"], $proposition["proposition"], $question["reponse"]));
		return $users;
	}
}
?>