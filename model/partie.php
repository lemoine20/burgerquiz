<?php
class Partie {
	private $categorie, $questions;
	public function __construct($categorie, $count){
		$this->categorie = $categorie;
		$this->questions = array();
	}
	public addQuestion($question){
		array_push($this->questions, $question);
	}
	public static function get($categorie = NULL){
		
	}
}
?>