<?php
//TODO: refactor
class Partie {
	private $id;
	public function __construct($id = NULL){
		$this->id = $id;
	}
	public function getId(){
		return $this->id;
	}
	public static function clear($dbh, $utilisateur){
		/*Remove the not finished partie_jouee from a utilisateur*/
		//Prepare querry
		$q = $dbh->prepare("DELETE FROM `partie_jouee` WHERE `id_user` = :id_user AND `Temps` = '00:00:00';");
		//Bind Values
		$q->bindValue(':id_user', $utilisateur->getId(), PDO::PARAM_INT);
		//Execute
		$q->execute();

		/*Remove every orphan partie*/
		//Prepare querry
		$q = $dbh->prepare("DELETE FROM `partie_proposition` WHERE `id_partie` NOT IN (SELECT `id_partie` FROM `partie_jouee`);
							DELETE FROM `partie` WHERE `id_partie` NOT IN (SELECT `id_partie` FROM `partie_jouee`);");
		//Execute
		$q->execute();
	}
	private function ins($dbh){
		//Prepare querry
		$q = $dbh->prepare("INSERT INTO `Partie` () VALUES ();");
		//Execute
		$q->execute();
		//Save id
		$this->id = $dbh->lastInsertId();
	}
	public function del($dbh){
		//Prepare querry
		$q = $dbh->prepare("DELETE FROM `Partie_Jouee` WHERE id_partie = :id ;
							DELETE FROM `Partie_Proposition` WHERE id_partie = :id ;
							DELETE FROM `Partie` WHERE id_partie = :id ;");			
		//Bind value
		$q->bindValue(':id', $this->id, PDO::PARAM_INT);
		//Execute
		$q->execute();
	}
	private function addProposition($dbh, $proposition){
		//Prepare querry
		$q = $dbh->prepare("INSERT INTO `partie_proposition` (`id_proposition`, `id_partie`) 
							VALUES (:id_proposition, :id_partie);");
		//Bind Values
		$q->bindValue(':id_partie', $this->id, PDO::PARAM_INT);
		$q->bindValue(':id_proposition', $proposition->getId(), PDO::PARAM_INT);
		//Execute
		$q->execute();
	}
	public function generate($dbh, $compte = 3, $categorie = NULL){
		//Partie already generated
		if(isset($this->id) || isset($this->generation))
			return false;
		$this->ins($dbh);
		//Generate categorie
		if(!isset($categorie))
			$categorie = Categorie::generate($dbh);
		//Generate question
		$questions = Question::generate($dbh, $categorie);
		foreach ($questions as $question){
			//Generate proposition
			$propositions = Proposition::generate($dbh, $question, $compte);
			foreach ($propositions as $proposition){
				//Link proposition
				$this->addProposition($dbh, $proposition);
			}
		}
		return true;
	}
	public function start($dbh, $utilisateur){		
		/*Insert the new partie_jouee*/
		//Prepare querry
		$q = $dbh->prepare("INSERT INTO `partie_jouee` (`id_user`, `id_partie`, `Temps`, `Score`, `Heure_depart`) 
							VALUES (:id_user, :id_partie, '00:00:00', 0, NOW());");
		//Bind Values
		$q->bindValue(':id_partie', $this->id, PDO::PARAM_INT);
		$q->bindValue(':id_user', $utilisateur->getId(), PDO::PARAM_INT);
		//Execute
		$q->execute();
	}
	public static function finish($dbh, $utilisateur){
		/*Get partie and game duration*/
		//Prepare querry
		$q = $dbh->prepare("SELECT `id_partie`, TIMEDIFF(TIMEDIFF(NOW(),`Heure_depart`),'00:00:14') as duration
							FROM `partie_jouee` WHERE `id_user` = :id_user 
							AND `Temps` = '00:00:00'");
		//Bind Values
		$q->bindValue(':id_user', $utilisateur->getId(), PDO::PARAM_INT);
		//Execute
		$q->execute();
		$result = $q->fetchAll();
		//Retrieve data
		if(sizeof($result) != 1) return NULL;
		$partie = new Partie($result[0]["id_partie"]);
		$duration = $result[0]["duration"];
		
		/*Calculate Score*/
		$score = 0;
		$propositions = $partie->getPropositions($dbh);
		$user_reponses = array_reverse(str_split($_GET["answers"]));
		for($i=0; $i<sizeof($propositions); $i++){
			if((string)($propositions[$i]->getReponse()) == $user_reponses[$i])
				$score++;
		}
		
		/*Update score and duration*/
		//Prepare querry
		$q = $dbh->prepare("UPDATE `partie_jouee` SET `score` = :score, `Temps` = :duration 
							WHERE `id_user` = :id_user AND `id_partie` = :id_partie");
		//Bind Values
		$q->bindValue(':score', $score, PDO::PARAM_INT);
		$q->bindValue(':duration', $duration, PDO::PARAM_STR);
		$q->bindValue(':id_user', $utilisateur->getId(), PDO::PARAM_INT);
		$q->bindValue(':id_partie', $partie->getId(), PDO::PARAM_INT);
		//Execute
		$q->execute();
		return array($score, $duration);
	}
	public function getQuestionnaire($dbh){
		$propositions = $this->getPropositions($dbh);
		$last_question = -1;
		$result = array();
		foreach($propositions as $proposition){
			$question = $proposition->getQuestion($dbh);
			if($last_question != $question->getId())
				array_push($result, array($question->getLabel1(), $question->getLabel2()));
			array_push($result[sizeof($result)-1], $proposition->getNom());
		}
		return $result;
	}
	private function getPropositions($dbh){
		//(The propositions are ordered by questions because of Partie::generate())
		//Prepare querry
		$q = $dbh->prepare("SELECT id_proposition FROM `partie_proposition`
							WHERE id_partie = :id_partie");
		//Bind Value
		$q->bindValue(':id_partie', $this->id, PDO::PARAM_INT);
		//Execute
		$q->execute();
		$ids = $q->fetchAll(PDO::FETCH_COLUMN);
		$propositions = array();
		foreach($ids as $id)
			array_push($propositions, Proposition::get($dbh, $id)[0]);
		return $propositions;
	}
	public static function get($dbh, $id = NULL, $utilisateur = NULL){
		//Generate conditions
		$conditions = "1";
		if(isset($id))	 		 $conditions .= " AND `id_partie` = :id";
		if(isset($utilisateur))	 $conditions .= " AND `id_user` = :id_user";
		//Prepare querry
		$q = $dbh->prepare("SELECT id_partie FROM `partie` WHERE ".$conditions);
		//Bind values
		if(isset($id))			$q->bindValue(':id', $id, PDO::PARAM_INT);
		if(isset($utilisateur))	$q->bindValue(':id_user', $utilisateur->getId(), PDO::PARAM_INT);
		//Execute querry
		$q->execute();
		
		return $q->fetchAll(PDO::FETCH_CLASS, "Partie");
	}
}