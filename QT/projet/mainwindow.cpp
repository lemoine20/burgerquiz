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
    connect( ui->treeWidget, SIGNAL( sectionDoubleClicked() ), this,  SLOT( treeHeaderDoubleClick() )  );
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::treeHeaderDoubleClick(){
    qDebug()<<ui->treeWidget->selectedItems();
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
    if(ui->lineEdit_question_1->text() != "" ||ui->lineEdit_question_2->text() != "" || ui->lineEdit_prop1->text() != "" ||
            ui->lineEdit_prop2->text() != "" || ui->lineEdit_prop3->text() != ""||
            (ui->radioButton->isChecked()!= false||ui->radioButton_2->isChecked()!= false||ui->radioButton_3->isChecked()!= false)||(ui->radioButton_4->isChecked()!= false||ui->radioButton_5->isChecked()!= false||ui->radioButton_6->isChecked()!= false)
            ||(ui->radioButton_7->isChecked()!= false||ui->radioButton_8->isChecked()!= false||ui->radioButton_9->isChecked()!= false)){


        if(ui->radioButton->isChecked()==true){
            if(ui->radioButton_4->isChecked()==true){
                if(ui->radioButton_7->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_7->text());
                }else if(ui->radioButton_8->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(), ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_8->text());
                }else if(ui->radioButton_9->isChecked()==true){
                    AddQBdd(ui->comboBox_categorie->currentIndex(),ui->lineEdit_question_1->text(),ui->lineEdit_question_2->text(),ui->lineEdit_prop1->text(), ui->radioButton->text(), ui->lineEdit_prop2->text(),ui->radioButton_4-> text(), ui->lineEdit_prop3->text(), ui->radioButton_9->text());
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
    while(result->next()){


        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, result->getInt("id_categorie"));

        quesres = quesstat->executeQuery();
        while(quesres->next()){


            QTreeWidgetItem* qItem = new QTreeWidgetItem(mItem);
            QString text = QString((quesres->getString("label1") + " : " + quesres->getString("label2")).asStdString().data());

            qItem->setText(0, text);
            ui->treeWidget->show();

            propstat = connection->prepareStatement("SELECT * FROM Proposition WHERE id_question=?");
            propstat->setInt(1, quesres->getInt("id_question"));

            propres = propstat->executeQuery();
            while(propres -> next()){

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
     addpstatement = connection->prepareStatement("INSERT INTO Proposition (nom_proposition, reponse, id_question) VALUES (?,?,?),(?,?,?),(?,?,?)");
     addpstatement->setString(1, Prop1.toUtf8().constData());
     addpstatement->setInt(2, R1.toInt());
     addpstatement->setInt(3, idresult->getInt(1));
     std::cout<<idresult->getInt(1)<<"\n";

     addpstatement->setString(4, Prop2.toUtf8().constData());
     addpstatement->setInt(5, R2.toInt());
     addpstatement->setInt(6, idresult->getInt(1));
     std::cout<<idresult->getInt(1)<<"\n";

     addpstatement->setString(7, Prop3.toUtf8().constData());
     addpstatement->setInt(8, R3.toInt());
     addpstatement->setInt(9, idresult->getInt(1));
     std::cout<<idresult->getInt(1)<<"\n";

     addpresult= addpstatement->executeQuery();
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
        readtree();
        ui->stackedWidget->setCurrentIndex(2);
    }else{
        Alerte.setText("NON REMPLIE");
        Alerte.exec();
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
    while(result->next()){

        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, result->getInt("id_categorie"));

        quesres = quesstat->executeQuery();


        while(quesres->next()){

            QTreeWidgetItem* qItem = new QTreeWidgetItem(mItem);
            QString text = QString((quesres->getString("label1") + " : " + quesres->getString("label2")).asStdString().data());

            qItem->setText(0, text);
            ui->treeWidget->show();

            propstat = connection->prepareStatement("SELECT * FROM Proposition WHERE id_question=?");
            propstat->setInt(1, quesres->getInt("id_question"));

            propres = propstat->executeQuery();

            while(propres -> next()){
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
        quesNom->setInt(1, (ui->comboBox_cat->currentIndex()+1));
        quesNo = quesNom->executeQuery();
        quesNo->next();
        on_comboBox_cat_currentIndexChanged(ui->comboBox_cat->currentIndex());

    }
}

void MainWindow::on_Annuler_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    readtree();
}

void MainWindow::on_comboBox_cat_currentIndexChanged(int current_index)
{
    quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
    quesstat->setInt(1, (current_index+1));
    quesres = quesstat->executeQuery();
    ui->comboBox_quest->clear();
    for (int j=1;quesres->next();j++){
        QString text = QString (((quesres->getString("label1"))+ " : "+(quesres->getString("label2"))).asStdString().data());
        ui->comboBox_quest->addItem(text);
    }
}

void MainWindow::on_confirmer_clicked()
{


    if(ui->lineEdit->text() != "" || (ui->radioButton_10->isChecked()!= false||ui->radioButton_11->isChecked()!= false||ui->radioButton_12->isChecked()!= false)){
        if(ui->radioButton_10->isChecked()== true){

            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_cat->currentText().split(":");
            quesstat->setString(1, label[0].toUtf8().constData());
            qDebug()<<label[0].toUtf8().constData();
            quesstat->setString(2, label[1].toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit->text(),ui->radioButton_10->text(), quesres->getInt("id_question"));

        }else if(ui->radioButton_11->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit->text(),ui->radioButton_11->text(), quesres->getInt("id_question"));
        }else if(ui->radioButton_12->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit->text(),ui->radioButton_12->text(), quesres->getInt("id_question"));
        }
    }

    if(ui->lineEdit_2->text() != "" || (ui->radioButton_13->isChecked()!= false||ui->radioButton_14->isChecked()!= false||ui->radioButton_15->isChecked()!= false)){
        if(ui->radioButton_13->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_13->text(), quesres->getInt("id_question"));
        }else if(ui->radioButton_14->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_14->text(), quesres->getInt("id_question"));
        }else if(ui->radioButton_15->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_15->text(), quesres->getInt("id_question"));
        }
    }

    if(ui->lineEdit_3->text() != "" || (ui->radioButton_16->isChecked()!= false||ui->radioButton_17->isChecked()!= false||ui->radioButton_18->isChecked()!= false)){
        if(ui->radioButton_16->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_17->text(), quesres->getInt("id_question"));
        }else if(ui->radioButton_17->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_16->text(), quesres->getInt("id_question"));
        }else if(ui->radioButton_18->isChecked()== true){
            quesstat = connection->prepareStatement("SELECT id_question FROM Question WHERE nom_question=?");
            quesstat->setString(1, ui->comboBox_cat->currentText().toUtf8().constData());
            quesres = quesstat->executeQuery();
            quesres->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_18->text(), quesres->getInt("id_question"));
        }
    }
    readtree();
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::AddPBdd(QString text, QString response, int id_question){
    delete catNom;
    delete connection;
    qDebug()<< id_question;
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

    qDebug()<<1;
    addpstatement = connection->prepareStatement("INSERT INTO Proposition (nom_proposition, reponse,id_question) VALUES (?,?,?)");
    addpstatement->setString(1, (text.toUtf8().constData()));
    qDebug()<<(text.toUtf8().constData());
    addpstatement->setInt(2, (response.toInt()));
    addpstatement->setInt(3, id_question);
    addpresult= addpstatement->executeQuery();
    addpresult->next();

    succes.setText("L'ajout est un succès");
    succes.exec();
    readtree();

}
