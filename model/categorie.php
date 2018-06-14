<?php
/**
 * \file categorie.php
 * \brief Classe Categorie.
 * \author Clément C.
 */
 
/**
 * \class Categorie
 * \brief Classe representant une categorie(/thème) de questions.
 */
class Categorie {
	private $id, $nom;
/**
 * \fn getNom ()
 * \brief Getter de l'attribut $nom.
 *
 * \return Nom de la proposition.
 */
	public function getNom(){
		return $this->nom;
	}
/**
 * \fn getQuestions ($dbh)
 * \brief Querry SQL des questions associés à cette categoie.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \return Liste d'objet Question correspondants.
 */
	public function getQuestions($dbh){
		return Question::get($dbh, NULL, $this->id);
	}
/**
 * \fn get ($dbh, $id = NULL, $nom=NULL)
 * \brief Querry SQL de categories.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $id Entier: Id de la categorie recherchée.
 * \param $nom Nom de la categorie recherchée.
 * \return Liste des objets Categorie trouvés dans la base de donnée.
 */
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
		return $q->fetchAll(PDO::FETCH_CLASS, "Categorie");
	}
	
/**
 * \fn generate ($dbh)
 * \brief Méthode de tirage au sort de categorie.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \return Objet Categorie tiré au sort.
 */
	public static function generate($dbh){
		$categories = Categorie::get($dbh);
		return $categories[array_rand($categories)];
	}
}