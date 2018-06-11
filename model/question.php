<?php
/**
 * \file question.php
 * \brief Classe question.
 * \author Clément C.
 */

/**
 * \class Question
 * \brief Classe representant une question.
 */
class Question {
	private $id, $id_categorie, $label1, $label2;
/**
 * \fn getId ()
 * \brief Getter de l'attribut $id.
 *
 * \return Entier: Id de la question.
 */
	public function getId(){
		return $this->id;
	}
/**
 * \fn getLabel1 ()
 * \brief Getter de l'attribut $label1.
 *
 * \return Premier label de la question ("-label1-, -label2-, ou les deux ?").
 */
	public function getLabel1(){
		return $this->label1;
	}
/**
 * \fn getLabel1 ()
 * \brief Getter de l'attribut $label2.
 *
 * \return Second label de la question ("-label1-, -label2-, ou les deux ?").
 */
	public function getLabel2(){
		return $this->label2;
	}
/**
 * \fn getCategorie ($dbh)
 * \brief Querry SQL de la categorie de la question.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \return Objet Categorie associé à cette question.
 */
	public function getCategorie($dbh){
		return Categorie::get($dbh, $this->id_categorie);
	}
/**
 * \fn getPropositions ($dbh)
 * \brief Querry SQL des propositions appartenants à cette question.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \return Liste des object Proposition associé à cette question.
 */	
	public function getPropositions($dbh){
		return Proposition::get($dbh, NULL, $this->id);
	}
/**
 * \fn get ($dbh, $id=NULL, $id_categorie=NULL)
 * \brief Querry SQL de questions.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \param $id Entier: Id de la question recherché.
 * \param $id_categorie Entier: Id de la categorie de la question recherché.
 * \return Liste des objets Question trouvés dans la base de donnée.
 */
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
	
/**
 * \fn generate ($dbh, $question)
 * \brief Méthode de tirage au sort de 3 questions.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \param $categorie Objet Categorie duquel les questions vont être tirés.
 * \return Liste des objets Question tirés au sort.
 */
	public static function generate($dbh, $categorie = NULL){
		if(!isset($categorie))
			$categorie = Categorie::generate($dbh);
		$questions = $categorie->getQuestions($dbh);
		shuffle($questions);
		return array_slice($questions, 0, 3);
	}
}