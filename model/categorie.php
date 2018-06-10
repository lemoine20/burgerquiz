<?php
class Categorie {
	private $id, $nom;
	
	public function getNom(){
		return $this->nom;
	}
	public function getQuestions($dbh){
		return Question::get($dbh, NULL, $this->id);
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
		return $q->fetchAll(PDO::FETCH_CLASS, "Categorie");
	}
	public static function generate($dbh){
		$categories = Categorie::get($dbh);
		return $categories[array_rand($categories)];
	}
}