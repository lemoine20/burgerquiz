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


    // Mise en place de requete
    QSqlQuery query;
    if(query.exec("INSERT INTO Question VALUES ('valeur 1', 'valeur 2', ...)")){
        std::cout << "Le titre a bien été changé ! :)" << std::endl;
    }else{
        std::cout << "Une erreur s'est produite. :(" << std::endl << q2c(query.lastError().text()) << std::endl;
    }
}
/* ------------ fonction d'affichage du message ------------*/
void remplissage_bdd::onTexteMessageReceived(QString message){
    qDebug()<<"Message chambre: "<<message;
    /* ------------ Parsage des données ------------*/
    parsage(message);

    /* ------------ Affichage des données parsées ------------*/
    afficheparsage(jsonObject);

    //déclaration des valeurs à envoyer dans la bdd
    cout << "send label1 value to bdd " << label1 << endl << flush;
    cout << "send label2 value to bdd " << label2 << endl << flush;
    cout << "send reponse value to bdd " << reponse << endl << flush;
    cout << "send nom_categorie value to bdd " << nom_categorie << endl << flush;
    cout << "send nom_proposition value to bdd " << nom_proposition << endl << flush;

}


void remplissage_bdd::parsage(QString message){

        jsonResponse = QJsonDocument::fromJson(message.toUtf8());//création de document
        jsonObject = jsonResponse.object();
}

    /* ------------ Teste du parsage de donnée ------------*/
void remplissage_bdd::afficheparsage(QJsonObject jsonObject){
  // Récupération de la variable C02
  categorie = jsonObject.value(QString("CO2")).toStdString();

  // Récupération de la variable USER

  question_1 = jsonObject.value(QString("USER")).toString().toStdString();

  // Récupération de la variable MTH02
  question_2 = jsonObject.value(QString("MTH02")).toString();
  //récupération de la température en binnaire
  proposition = jsonObject.value(QString("MTH02")).toString();

  //recupération de l'humidité en binnaire
  reponse = jsonObject.value(QString("MTH02")).toString();


  // Récupération de la variable temps
  MyDate.setMSecsSinceEpoch(jsonObject.value(QString("TIME")).toDouble());  
  //MyDate = MyDate.addSecs(3600*2);



  // Récupération de la variable TV
  if (jsonObject.value(QString("TV")).toString().toStdString() == "off"){
    TV = 1;
  }else{
    TV = 0;
  }

  // Récupération de la variable OVEN
  FOUR = jsonObject.value(QString("OVEN")).toBool();

  // Récupération de la variable FALL
  CHUTE = jsonObject.value(QString("FALL")).toDouble();

  qDebug()<< remplissage_bdd::gettemp_bin();
}
