<?php
	class Utilisateur {
		private $id, $nom, $mdp, $mail, $code;
	
		public function __construct($id, $nom, $mdp, $mail, $code = NULL) {
			$this->id = $id;
			$this->nom = $nom;
			$this->mdp = $mdp;
			$this->mail = $mail;
			$this->code = isset($code) ? $code : rand(1000,9999);
		}
		
		public function getId(){
			return $this->id;
		}
		public function getNom(){
			return $this->nom;
		}
		public function getMdp(){
			return $this->mdp;
		}
		public function getMail(){
			return $this->mail;
		}
		public function getCode(){
			return $this->code;
		}
		
		public function ins($dbh) {
			//Prepare querry
			$q = $dbh->prepare("INSERT INTO `Utilisateur` (`nom`, `mots_de_passe`, `mail`, `code_d_activation`) 
									VALUES (:nom, :mdp, :mail, :code);");
			//Bind values
			$q->bindValue(':nom', $this->nom, PDO::PARAM_STR);
			$q->bindValue(':mdp', $this->mdp, PDO::PARAM_STR);
			$q->bindValue(':mail', $this->mail, PDO::PARAM_STR);
			$q->bindValue(':code', $this->code, PDO::PARAM_INT);
			//Execute
			$q->execute();
			//Save id
			$this->id = $dbh->lastInsertId();
		}
		public function del($dbh) {
			//Prepare querry
			$q = $dbh->prepare("DELETE FROM `Utilisateur` WHERE id_user = :id ;");			
			//Bind value
			$q->bindValue(':id', $this->id, PDO::PARAM_INT);
			//Execute
			$q->execute();
		}
		
		public static function get($dbh, $id=NULL, $nom=NULL, $mdp=NULL, $mail=NULL, $code=NULL) {
			//Generate conditions
			$conditions = "1 ";
			if(isset($id))	 $conditions .= " AND `id` = :id";
			if(isset($nom))	 $conditions .= " AND `nom` = :nom";
			if(isset($mdp))	 $conditions .= " AND `mots_de_passe` = :mdp";
			if(isset($mail)) $conditions .= " AND `mail` = :mail";
			if(isset($code)) $conditions .= " AND `code_d_activation` = :code";
			//Prepare querry
			$q = $dbh->prepare("SELECT `id_user` as id, `nom`, `mots_de_passe` as mdp, `mail`, `code_d_activation` as code 
								FROM `Utilisateur` WHERE ".$conditions.";");
			//Bind values
			if(isset($id))	$q->bindValue(':id', $id, PDO::PARAM_INT);
			if(isset($nom))	$q->bindValue(':nom', $nom, PDO::PARAM_STR);
			if(isset($mdp))	$q->bindValue(':mdp', $mdp, PDO::PARAM_STR);
			if(isset($mail))$q->bindValue(':mail', $mail, PDO::PARAM_STR);
			if(isset($code))$q->bindValue(':code', $code, PDO::PARAM_INT);
			//Execute querry
			$q->execute();
			$result = $q->fetchAll();
			//var_dump($result);
			//Retrieve data into an array of objects 
			$users = array();
			foreach ($result as $k => $user)
				array_push($users,new Utilisateur($user["id"],$user["nom"],$user["mdp"],$user["mail"],$user["code"]));
			return $users;
		}
	}
?>