#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "connection.h"
#include <QDebug>

#define hostname    "localhost"
#define dbname      "Burger"
#define username    "Burger"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);// Accès a la page de connection

//    std::cout<< ui->stackedWidget->currentIndex();

    ui->treeWidget->setHeaderHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_Deconnexion_clicked()
{
    // Diconnect.
    delete catNom;
    delete connection;
    ui->stackedWidget->setCurrentIndex(0);// Accès a la page de connection

    succes.setText("La déconnection est un succès");
    succes.exec();
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_IP->setPlaceholderText(hostname);
    ui->lineEdit_login->setPlaceholderText(username);
    ui->lineEdit_name->setPlaceholderText(dbname);

    try
    {
      driver = get_driver_instance();
      connection = driver->connect(("tcp://" + ui->lineEdit_IP->text() + ":" +
        ui->port->text()).toStdString(), ui->lineEdit_login->text().toStdString(),
        ui->lineEdit_pwd->text().toStdString());
      if (connection){
          ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
            connection->setSchema(ui->lineEdit_name->text().toStdString());
            ui->treeWidget->clear();
              affichageTree(connection,
                      statement = NULL,
                      result = NULL);
      }

    }
    catch (SQLException& e)
    {
      cout << "Error: " << e.what() << "." << endl;
      return;
    }

}

void MainWindow::on_Annuler_clicked()
{
    ui->treeWidget->show();
    ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil

}

void MainWindow::on_Confirmer_clicked(){
    if(ui->lineEdit_question_1->text() != "" ||ui->lineEdit_question_2->text() != "" || ui->lineEdit_prop1->text() != "" || ui->lineEdit_prop2->text() != "" || ui->lineEdit_prop3->text() != ""){


        if(ui->radioButton->isChecked()==true){
                    qDebug()<< 1;
            if(ui->radioButton_4->isChecked()==true){
                qDebug()<< 2;
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(), ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                qDebug()<< 3;
                }
            }else if(ui->radioButton_5->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                }
            }else if(ui->radioButton_6->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                }
            }
        }if(ui->radioButton_2->isChecked()==true){
            if(ui->radioButton_4->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                }
            }else if(ui->radioButton_5->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                }
            }else if(ui->radioButton_6->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_2->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                }
            }
        }if(ui->radioButton_3->isChecked()==true){
                if(ui->radioButton_4->isChecked()==true){
                    if(ui->radioButton_7->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                    }else if(ui->radioButton_8->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                    }else if(ui->radioButton_9->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                    }
                }else if(ui->radioButton_5->isChecked()==true){
                    if(ui->radioButton_7->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                    }else if(ui->radioButton_8->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                    }else if(ui->radioButton_9->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_5-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                    }
                }else if(ui->radioButton_6->isChecked()==true){
                    if(ui->radioButton_7->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                    }else if(ui->radioButton_8->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                    }else if(ui->radioButton_9->isChecked()==true){
                        AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton_3->text(), ui->lineEdit_prop2->text(),ui->radioButton_6-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
                    }
           }
        }
        readtree();
        ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil

    }else{
        Alerte.setText("Un champs n'est pas remplie");
        Alerte.exec();
    }
}

void MainWindow::on_question_clicked()
{
    ui->comboBox_categorie->clear();
    ui->lineEdit_question_1->clear();
    ui->lineEdit_question_2->clear();
    ui->lineEdit_prop1->clear();
    ui->lineEdit_prop2->clear();
    ui->lineEdit_prop3->clear();
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();
    ui->stackedWidget->setCurrentIndex(1);// Accès à la page d'ajout de question

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
    for(int i = 1; i < catNo->getInt("id_categorie"); ++i){
        result->next();
        ui->comboBox_categorie->addItem(QString((result->getString("nom_categorie")).asStdString().data()));

    }
}


void MainWindow::affichageTree(Connection* connection, PreparedStatement* statement, ResultSet* result){
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
   // std::cout<<catNo->getInt("id_categorie");
    for(int i = 1; i < (catNo->getInt("id_categorie")+1); ++i){
        result->next();

        qDebug()<<result->getString("nom_categorie").asStdString().data();
        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        quesNom = connection->prepareStatement("SELECT count(*) FROM Question WHERE id_categorie=?");
        quesNom->setInt(1, i);

        quesNo = quesNom->executeQuery();
        quesNo->next();
        //std::cout<<quesNo->getInt(1);

        quesMin = connection->prepareStatement("SELECT id_question FROM Question WHERE id_categorie=? LIMIT 1");
        quesMin->setInt(1, i);

        quesMi = quesMin->executeQuery();
        quesMi->next();

        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, i);

        quesres = quesstat->executeQuery();

        qDebug()<< (quesMi->getInt(1));
        for(int j = (quesMi->getInt(1));( j<(quesNo->getInt(1)+quesMi->getInt(1))); ++j){


            quesres->next();

//            std::cout<<quesres->getString("label1");


            QTreeWidgetItem* qItem = new QTreeWidgetItem(mItem);
            QString text = QString((quesres->getString("label1") + " : " + quesres->getString("label2")).asStdString().data());

            qItem->setText(0, text);
            ui->treeWidget->show();

            propNom = connection->prepareStatement("SELECT count(*) FROM Proposition WHERE id_question=?");
            propNom->setInt(1, j);
            propNo = propNom->executeQuery();
            propNo->next();

          //  qDebug()<<i;
          //  qDebug()<<j;
            propstat = connection->prepareStatement("SELECT * FROM Proposition WHERE id_question=?");
            propstat->setInt(1, j);

            propres = propstat->executeQuery();

            for(int k = 1; k<((propNo->getInt(1))); ++k){
                propres -> next();
                QTreeWidgetItem* pItem = new QTreeWidgetItem(qItem);
                pItem->setText(0, QString(propres->getString("nom_proposition").asStdString().data()));
                ui->treeWidget->show();
                QTreeWidgetItem* rItem = new QTreeWidgetItem(pItem);
                rItem->setText(0, QString(propres->getString("reponse").asStdString().data()));
            }
       }
   }
}


void MainWindow::AddQBdd(int cat,QString Question1, QString Question2, QString Prop1, QString R1, QString Prop2, QString R2, QString Prop3, QString R3){
     addqstatement = connection->prepareStatement("INSERT INTO Question (label1, label2,id_categorie) VALUES (?,?,?)");
     addqstatement->setString(1, Question1.toUtf8().constData());
     addqstatement->setString(2, Question2.toUtf8().constData());
     addqstatement->setInt(3,cat+1);
     addqresult = addqstatement->executeQuery();
     addqresult->next();
     idstatement = connection->prepareStatement("SELECT LAST_INSERT_ID() AS id_question");
     idresult = idstatement->executeQuery();
     idresult->next();
     qDebug()<<"insert prop";
     addpstatement = connection->prepareStatement("INSERT INTO Proposition (nom_proposition, reponse,id_question) VALUES (?,?,?),(?,?,?),(?,?,?)");
     addpstatement->setInt(1, idresult->getInt(1));
     addpstatement->setString(2, Prop1.toUtf8().constData());
     addpstatement->setInt(3, R1.toInt());
     addpstatement->setInt(4, idresult->getInt(1));
     addpstatement->setString(5, Prop2.toUtf8().constData());
     addpstatement->setInt(6, R2.toInt());
     addpstatement->setInt(7, idresult->getInt(1));
     addpstatement->setString(8, Prop3.toUtf8().constData());
     addpstatement->setInt(9, R3.toInt());
     addpresult= statement->executeQuery();
     addpresult->next();
     succes.setText("L'ajout est un succès");
     succes.exec();
 }


void MainWindow::on_categorie_clicked(){
     ui->stackedWidget->setCurrentIndex(3);// Accès à la page d'ajout de categorie
    ui->lineEdit_ajoutCat->clear();
}

void MainWindow::on_Confirmer_cat_clicked()
{
    if(ui->lineEdit_ajoutCat->text() != ""){
        addcstatement = connection->prepareStatement("INSERT INTO Categorie (nom_categorie) VALUES (?)");
        addcstatement->setString(1, (ui->lineEdit_ajoutCat->text()).toUtf8().constData());
        addcresult = addcstatement->executeQuery();
        addcresult->next();
        qDebug()<<1;
        readtree();
        ui->stackedWidget->setCurrentIndex(2);
    }
}

void MainWindow::on_Annuler_cat_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    readtree();
}

void MainWindow::readtree(){
    delete catNom;
    delete connection;

    ui->lineEdit_IP->setPlaceholderText(hostname);
    ui->lineEdit_login->setPlaceholderText(username);
    ui->lineEdit_name->setPlaceholderText(dbname);

    try
    {
      driver = get_driver_instance();
      connection = driver->connect(("tcp://" + ui->lineEdit_IP->text() + ":" +
        ui->port->text()).toStdString(), ui->lineEdit_login->text().toStdString(),
        ui->lineEdit_pwd->text().toStdString());
      if (connection){
            connection->setSchema(ui->lineEdit_name->text().toStdString());
            ui->treeWidget->clear();
              affichageTree(connection,
                      statement = NULL,
                      result = NULL);
      }

    }
    catch (SQLException& e)
    {
      cout << "Error: " << e.what() << "." << endl;
      return;
    }

    ui->treeWidget->clear();
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
    // std::cout<<catNo->getInt("id_categorie");
    for(int i = 1; i < (catNo->getInt("id_categorie")+1); ++i){
        result->next();

        //qDebug()<<result->getString("nom_categorie").asStdString().data();
        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        quesNom = connection->prepareStatement("SELECT count(*) FROM Question WHERE id_categorie=?");
        quesNom->setInt(1, i);

        quesNo = quesNom->executeQuery();
        quesNo->next();
                                //std::cout<<quesNo->getInt(1);

        quesMin = connection->prepareStatement("SELECT id_question FROM Question WHERE id_categorie=? LIMIT 1");
        quesMin->setInt(1, i);

        quesMi = quesMin->executeQuery();
        quesMi->next();

        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, i);

        quesres = quesstat->executeQuery();


        for(int j = (quesMi->getInt(1));( j<(quesNo->getInt(1)+quesMi->getInt(1))); ++j){

            quesres->next();

            QTreeWidgetItem* qItem = new QTreeWidgetItem(mItem);
            QString text = QString((quesres->getString("label1") + " : " + quesres->getString("label2")).asStdString().data());

            qItem->setText(0, text);
            ui->treeWidget->show();

            propNom = connection->prepareStatement("SELECT count(*) FROM Proposition WHERE id_question=?");
            propNom->setInt(1, j);
            propNo = propNom->executeQuery();
            propNo->next();

            propstat = connection->prepareStatement("SELECT * FROM Proposition WHERE id_question=?");
            propstat->setInt(1, j);

            propres = propstat->executeQuery();

            for(int k = 1; k<((propNo->getInt(1))); ++k){
                propres -> next();
                QTreeWidgetItem* pItem = new QTreeWidgetItem(qItem);
                pItem->setText(0, QString(propres->getString("nom_proposition").asStdString().data()));
                ui->treeWidget->show();
                QTreeWidgetItem* rItem = new QTreeWidgetItem(pItem);
                rItem->setText(0, QString(propres->getString("reponse").asStdString().data()));
            }
        }
    }
}

void MainWindow::on_proposition_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->comboBox_cat->clear();
    ui->comboBox_quest->clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
    for(int i = 1; i < catNo->getInt("id_categorie"); ++i){
        result->next();
        ui->comboBox_cat->addItem(QString((result->getString("nom_categorie")).asStdString().data()));
        quesNom = connection->prepareStatement("SELECT count(*) FROM Question WHERE id_categorie=?");
        quesNom->setInt(1, i);

        quesNo = quesNom->executeQuery();
        quesNo->next();

        quesMin = connection->prepareStatement("SELECT id_question FROM Question WHERE id_categorie=? LIMIT 1");
        quesMin->setInt(1, i);

        quesMi = quesMin->executeQuery();
        quesMi->next();

        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, i);

        quesres = quesstat->executeQuery();

        for (int j=quesMi->getInt(1); j<(quesNo->getInt(1)+quesMi->getInt(1)); j++){
            quesres->next();
            ui->comboBox_quest->clear();
            QString text = QString (((quesres->getString("label1"))+ " : "+(quesres->getString("label2"))).asStdString().data());
            ui->comboBox_quest->addItem(text);
        }
    }
}

void MainWindow::on_Annuler_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    readtree();
}
