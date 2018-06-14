<?php
/**
 * \file utilisateur.php
 * \brief Classe Utilisateur.
 * \author Clément C.
 */

/**
 * \class Utilisateur
 * \brief Classe representant un compte utilisateur.
 */
class Utilisateur {
	private $id, $nom, $mdp, $mail, $code;
/**
 * \fn __construct ($id, $nom, $mdp, $mail, $code = NULL)
 * \brief Constructeur de la classe Utilisateur.
 *
 * \param $nom Pseudo de l'utilisateur.
 * \param $mdp Mot de passe de l'utilisateur.
 * \param $mail Adresse mail de l'utilisateur.
 * \param $code Entier: code d'activation ([1000-9999] si non-activé, 0 si activé et -1 si banni).
 */	
	public function __construct($id, $nom, $mdp, $mail, $code = NULL) {
		$this->id = $id;
		$this->nom = $nom;
		$this->mdp = $mdp;
		$this->mail = $mail;
		$this->code = isset($code) ? $code : rand(1000,9999);
	}
/**
 * \fn getId ()
 * \brief Getter de l'attribut $id.
 *
 * \return Entier: Id de l'utilisateur.
 */
	public function getId(){
		return $this->id;
	}
/**
 * \fn getNom ()
 * \brief Getter de l'attribut $nom.
 *
 * \return Pseudo de l'utilisateur.
 */	
	public function getNom(){
		return $this->nom;
	}
/**
 * \fn getMdp ()
 * \brief Getter de l'attribut $mdp.
 *
 * \return Pseudo de l'utilisateur.
 */	
	public function getMdp(){
		return $this->mdp;
	}
/**
 * \fn getMail ()
 * \brief Getter de l'attribut $mail.
 *
 * \return Adresse mail de l'utilisateur.
 */	
	public function getMail(){
		return $this->mail;
	}
/**
 * \fn getCode ()
 * \brief Getter de l'attribut $code.
 *
 * \return Entier: Code d'activation de l'utilisateur.
 */	
	public function getCode(){
		return $this->code;
	}

/**
 * \fn activate ($dbh, $code)
 * \brief Méthode d'activation du compte utilisateur.
 * Active le compte utilisateur après avoir vérifié que le code d'activation est bon.
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $code Entier: code d'activation .
 * \return Booléan: Booléan true si l'activation a échoué et false is elle a réussit.
 */	
	public function activate($dbh, $code){
		if($code < 1000 || $code > 9999)
			return true;
		if($this->code != $code)
			return true;
		$this->code = 0;
		//Prepare querry
		$q = $dbh->prepare("UPDATE `utilisateur` SET `code_d_activation` = 0 WHERE `id_user` = :id");
		//Bind values
		$q->bindValue(':id', $this->id, PDO::PARAM_INT);
		//Execute
		$q->execute();
		return false;
	}
/**
 * \fn ins ($dbh)
 * \brief Insère l'objet utilisateur dans la base de donnée.
 * \param $dbh Objet PDO de connexion à la base de donnée.
 */	
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
/**
 * \fn del ($dbh)
 * \brief Supprime l'utilisateur de la base de donnée.
 * \param $dbh Objet PDO de connexion à la base de donnée.
 */	
	public function del($dbh) {
		//Prepare querry
		$q = $dbh->prepare("DELETE FROM `Partie_Jouee` WHERE id_user = :id ;DELETE FROM `Utilisateur` WHERE id_user = :id ;");			
		//Bind value
		$q->bindValue(':id', $this->id, PDO::PARAM_INT);
		//Execute
		$q->execute();
	}
/**
 * \fn get ($dbh, $id=NULL, $nom=NULL, $mdp=NULL, $mail=NULL, $code=NULL)
 * \brief Querry SQL de utilisateur.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $id Entier: Id de l'utilisateur recherché.
 * \param $nom Pseudo de l'utilisateur recherché.
 * \param $mdp Mot de Passe hashé de l'utilisateur recherché.
 * \param $code Entier: code d'activation de l'utilisateur recherché.
 * \return Liste des objets Utilisateur trouvés dans la base de donnée.
 */
	public static function get($dbh, $id=NULL, $nom=NULL, $mdp=NULL, $mail=NULL, $code=NULL) {
		//Generate conditions
		$conditions = "1 ";
		if(isset($id))	 $conditions .= " AND `id_user` = :id";
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
		return $q->fetchAll(PDO::FETCH_CLASS|PDO::FETCH_PROPS_LATE, "Utilisateur", array("id","nom","mdp","mail","code"));
	}
}