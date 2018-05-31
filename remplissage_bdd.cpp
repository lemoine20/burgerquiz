// ==== Appel de fichier ==== //
#include "remplissage_bdd.hpp"

// ==== Mettre en place la méthode config() pour recuperer les id pour accéder à la bdd et faire une requete ==== //
void Bdd::Config(std::string nom_categorie, std::string label1,std::string label2,
    std::string nom_proposition, std::string nom_reponse, int code_d_activation,
     std::string mots_de_passe, std::string mail, std::string nom){

     // Id pour se connecter à la bdd
    db.setHostName("localhost");
    db.setUserName("Burger");
    db.setPassword("Burgerpwd");
    db.setDatabaseName("Burger");

    // Bloc de condition if avec message d'erreur en cas d'erreur
    if(db.open()){
        std::cout << "Vous êtes maintenant connecté à " << q2c(db.hostName()) << std::endl;
    }else{
        std::cout << "La connexion a échouée, désolé :(" << std::endl << q2c(db.lastError().text()) << std::endl;
    }

    //déclaration des valeurs à envoyer dans la bdd
    cout << "send label1 value to bdd " << label1 << endl << flush;
    cout << "send label2 value to bdd " << label2 << endl << flush;
    cout << "send nom_reponse value to bdd " << nom_reponse << endl << flush;
    cout << "send nom_categorie value to bdd " << nom_categorie << endl << flush;
    cout << "send nom_proposition value to bdd " << nom_proposition << endl << flush;

    // Mise en place de requete
    QSqlQuery query;
    if(query.exec("SELECT * FROM Question")){
        std::cout << "Le titre a bien été changé ! :)" << std::endl;
    }else{
        std::cout << "Une erreur s'est produite. :(" << std::endl << q2c(query.lastError().text()) << std::endl;
    }
}
