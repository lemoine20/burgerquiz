<?php
	class Categorie {
		private $id, $nom;
	
		private function __construct($id, $nom) {
			$this->id = $id;
			$this->nom = $nom;
		}
		
		public function getNom(){
			return $this->nom;
		}
		public function getQuestions($dbh){
			return Question::get($dbh, NULL, $id);
		}
		
		public static function get($dbh, $id=NULL, $nom=NULL){
			//Generate conditions
			$conditions = "1 ";
			if(isset($id))	 $conditions .= " AND `id_categorie` = :id";
			if(isset($nom))	 $conditions .= " AND `nom_categorie` = :nom";
			//Prepare querry
			$q = $dbh->prepare("SELECT `id_categorie` as id, `nom_categorie` as nom 
								FROM `Categorie` WHERE ".$conditions.";");
			//Bind values
			if(isset($id))	$q->bindValue(':id', $id, PDO::PARAM_INT);
			if(isset($nom))	$q->bindValue(':nom', $nom, PDO::PARAM_STR);
			//Execute querry
			$q->execute();
			$result = $q->fetchAll();
			//var_dump($result);
			//Retrieve data into an array of objects 
			$users = array();
			foreach ($result as $k => $user)
				array_push($users,new Categorie($user["id"],$user["nom"]));
			return $users;
		}
	}
?>