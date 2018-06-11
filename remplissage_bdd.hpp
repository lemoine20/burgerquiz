#ifndef REMPLISSAGE_BDD_H
#define REMPLISSAGE_BDD_H

// ==== Include ==== //
#include <QCoreApplication>
#include <QtSql>
#include <iostream>


#define q2c(string) string.toStdString()

using namespace std;

class Bdd{

  private:
    // Creation d'un objet pour se connecter à la base de donnée voulut
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //Recuperation recup;

  public:
    // Méthode pour accès et requete BDD
    void Config(std::string nom_categorie, std::string label1,std::string label2,
        std::string nom_proposition, std::string nom_reponse, int code_d_activation,
         std::string mots_de_passe, std::string mail, std::string nom);
};
#endif
