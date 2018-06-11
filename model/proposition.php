<?php
/**
 * \file proposition.php
 * \brief Classe proposition.
 * \author Clément C.
 */

/**
 * \class Proposition
 * \brief Classe representant une proposition.
 */
class Proposition {
	private $id, $id_question, $nom, $reponse;

/**
 * \fn getId ()
 * \brief Getter de l'attribut $id.
 *
 * \return Entier: Id de la proposition.
 */
	public function getId(){
		return $this->id;
	}
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
 * \fn getReponse ()
 * \brief Getter de l'attribut $reponse.
 *
 * \return Entier: 1 si la bonne réponse est le label 1,
 *         2 si la bonne réponse est le label 2 et
 *         3 si la bonne réponse est le label 1 et le label 2.
 */	
	public function getReponse(){
		return $this->reponse;
	}
/**
 * \fn getQuestion ($dbh)
 * \brief Querry SQL de la question de cette proposition.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \return Objet de la classe Question correspondant.
 */
	public function getQuestion($dbh){
		return Question::get($dbh, $this->id_question)[0];
	}
	
/**
 * \fn get ($dbh, $id = NULL, $id_question = NULL)
 * \brief Querry SQL de propositions.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \param $id Entier: Id de la proposition recherchée.
 * \param $id_question Entier: Id de la question recherchée.
 * \return Liste des objets Proposition trouvés dans la base de donnée.
 */
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
	
/**
 * \fn generate ($dbh, $question, $compte = 3)
 * \brief Méthode de tirage au sort de propostions.
 *
 * \param $dbh Object PDO de connexion à la base de donnée.
 * \param $question Objet Question duquel les propositions vont être tirés.
 * \param $compte Entier: nombre maximum de propositions tirés.
 * \return Liste des objets Proposition tirés au sort.
 */
	public static function generate($dbh, $question, $compte = 3){
		$propositions = $question->getPropositions($dbh);
		shuffle($propositions);
		return array_slice($propositions, 0, $compte);
	}
}