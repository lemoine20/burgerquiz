<?php
/**
 * \file partieJouee.php
 * \brief Classe PartieJouee.
 * \author Clément C.
 */
 
/**
 * \class PartieJouee
 * \brief Classe representant une partie jouée par un utilisateur.
 */
class PartieJouee{
	private $id, $nom_user, $nom_categorie, $score, $temps, $date;
/**
 * \fn getId ()
 * \brief Getter de l'attribut $id.
 *
 * \return Entier: Id de la partie jouée.
 */
	public function getId(){
		return $this->id;
	}
/**
 * \fn getNomUtilisateur ()
 * \brief Getter de l'attribut $nom_user.
 *
 * \return nom de l'utilisateur ayant joué à la partie.
 */
	public function getNomUtilisateur(){
		return $this->nom_user;
	}
/**
 * \fn getNomCategorie ()
 * \brief Getter de l'attribut $nom_categorie.
 *
 * \return nom de la categorie de la partie jouée.
 */
	public function getNomCategorie(){
		return $this->nom_categorie;
	}
/**
 * \fn getScore ()
 * \brief Getter de l'attribut $score.
 *
 * \return score de la partie jouée.
 */
	public function getScore(){
		return $this->score;
	}
/**
 * \fn getTemps ()
 * \brief Getter de l'attribut $temps.
 *
 * \return temps de la partie jouée.
 */
	public function getTemps(){
		return $this->temps;
	}
/**
 * \fn getDate ()
 * \brief Getter de l'attribut $date.
 *
 * \return date de la partie jouée.
 */
	public function getDate(){
		return $this->date;
	}
/**
 * \fn get ($dbh, $partie=NULL, $nom_utilisateur=NULL, $nom_categorie=NULL, $filter=NULL, $min=NULL, $max=NULL)
 * \brief Querry SQL de parties jouées utilisé pour le palmarès.
 *
 * \param $dbh Objet PDO de connexion à la base de donnée.
 * \param $partie Objet Partie de la partie jouée recherchée.
 * \param $utilisateur Nom d'Utilisateur de la partie jouée recherchée.
 * \param $categorie Nom de Categorie de la partie jouée recherchée.
 * \param $filter Chaîne de caractère représentant le filtre utilisé (toutes autres valeurs désactivent le filtrage)
 *         valeurs possibles: -"score" pour filtrer par score. 
 *                            -"temps" pour filtrer par temps de jeu. 
 *                            -"date"  pour filtrer par date. 
 * \param $min Entier/String: valeur minimal de filtrage (Entier pour le filtre "score" et String pour les autres).
 * \param $max Entier/String: valeur maximal de filtrage (Entier pour le filtre "score" et String pour les autres).
 * \return Liste des objets PartieJouee trouvés dans la base de donnée.
 */
	public static function get($dbh, $partie=NULL, $nom_user=NULL, $nom_categorie=NULL, $filter=NULL, $min=NULL, $max=NULL){
		//Generate conditions
		$conditions = "";
		if(isset($nom_user))				$conditions .= " AND `nom` LIKE :nom_user";
		if(isset($partie))	 				$conditions .= " AND `partie_jouee`.`id_partie` = :id_partie";
		if(isset($nom_categorie))			$conditions .= " AND `nom_categorie` LIKE :nom_categorie";
		if(isset($min) && $filter=="score")	$conditions .= " AND `score` >= :min_score";
		if(isset($max) && $filter=="score")	$conditions .= " AND `score` <= :max_score";
		if(isset($min) && $filter=="temps")	$conditions .= " AND `temps` >= :min_temps";
		if(isset($max) && $filter=="temps")	$conditions .= " AND `temps` <= :max_temps";
		//Prepare querry (querry the whole db for easy access to nom_categorie)
		$q = $dbh->prepare("SELECT partie_Jouee.id_partie as id, nom as nom_user, nom_categorie, score, temps, CAST(Heure_depart AS DATE) as date
							FROM utilisateur, partie_jouee, partie_proposition, proposition, question, categorie
							WHERE utilisateur.id_user = partie_jouee.id_user
							AND partie_jouee.id_partie = partie_proposition.id_partie
							AND partie_proposition.id_proposition = proposition.id_proposition
							AND question.id_question = proposition.id_question
							AND categorie.id_categorie = question.id_categorie".$conditions."
							GROUP BY partie_jouee.id_user, partie_jouee.id_partie
							ORDER BY partie_jouee.score DESC, partie_jouee.temps ASC;");
		//Bind values
		if(isset($nom_user))				$q->bindValue(':nom_user', $nom_user, PDO::PARAM_STR);
		if(isset($partie))					$q->bindValue(':id_partie', (int)$partie->getId(), PDO::PARAM_INT);
		if(isset($nom_categorie))			$q->bindValue(':nom_categorie', $nom_categorie, PDO::PARAM_STR);
		if(isset($min) && $filter=="score")	$q->bindValue(':min_score', $min, PDO::PARAM_INT);
		if(isset($max) && $filter=="score")	$q->bindValue(':max_score', $max, PDO::PARAM_INT);
		if(isset($min) && $filter=="temps")	$q->bindValue(':min_temps', $min, PDO::PARAM_STR);
		if(isset($max) && $filter=="temps")	$q->bindValue(':max_temps', $max, PDO::PARAM_STR);
		//Execute querry
		$q->execute();
		return $q->fetchAll(PDO::FETCH_CLASS, "PartieJouee");
	}
}