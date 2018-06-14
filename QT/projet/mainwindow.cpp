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
    //connect( ui->treeWidget, SIGNAL( sectionDoubleClicked() ), this,  SLOT( treeHeaderDoubleClick() )  );
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*void MainWindow::treeHeaderDoubleClick(){
    qDebug()<<ui->treeWidget->currentItem();
    qDebug()<<ui->treeWidget->selectedItems();
}*/


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
    if(ui->lineEdit_question_1->text() != "" &&ui->lineEdit_question_2->text() != "" && ui->lineEdit_prop1->text() != "" &&
            ui->lineEdit_prop2->text() != "" && ui->lineEdit_prop3->text() != ""
            && (!ui->radioButton->isChecked()  ||!ui->radioButton_2->isChecked()||!ui->radioButton_3->isChecked())
            && (!ui->radioButton_4->isChecked()||!ui->radioButton_5->isChecked()||!ui->radioButton_6->isChecked())
            && (!ui->radioButton_7->isChecked()||!ui->radioButton_8->isChecked()||!ui->radioButton_9->isChecked())){
qDebug()<<"why";

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
    while( result->next()){

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

    while( result->next()){

        ui->comboBox_cat->addItem(QString((result->getString("nom_categorie")).asStdString().data()));

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
    while(quesres->next()){
        QString text = QString (((quesres->getString("label1"))+ " : "+(quesres->getString("label2"))).asStdString().data());
        ui->comboBox_quest->addItem(text);
    }
}

void MainWindow::on_confirmer_clicked()
{


    if(ui->lineEdit->text() != "" && (ui->radioButton_10->isChecked()!= true||ui->radioButton_11->isChecked()!= true||ui->radioButton_12->isChecked()!= true)){
        if(ui->radioButton_10->isChecked()== true){

            PreparedStatement* teststat = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");
            teststat->setString(1, label[0].toUtf8().constData());
            teststat->setString(2, label[1].toUtf8().constData());

            ResultSet* testres = teststat->executeQuery();
            testres->next();

            AddPBdd(ui->lineEdit->text(),ui->radioButton_10->text(), testres->getInt("id_question"));

        }else if(ui->radioButton_11->isChecked()== true){
            PreparedStatement* teststat1 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");
            teststat1->setString(1, label[0].toUtf8().constData());
            teststat1->setString(2, label[1].toUtf8().constData());
            ResultSet* testres1 = teststat1->executeQuery();
            testres1->next();
            AddPBdd(ui->lineEdit->text(),ui->radioButton_11->text(), testres1->getInt("id_question"));
        }else if(ui->radioButton_12->isChecked()== true){
            PreparedStatement* teststat2 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");
            teststat2->setString(1, label[0].toUtf8().constData());
            teststat2->setString(2, label[1].toUtf8().constData());
            ResultSet* testres2 = teststat2->executeQuery();
            testres2->next();
            AddPBdd(ui->lineEdit->text(),ui->radioButton_12->text(), testres2->getInt("id_question"));
        }
    }

    if(ui->lineEdit_2->text() != "" && (ui->radioButton_13->isChecked()!= true||ui->radioButton_14->isChecked()!= true||ui->radioButton_15->isChecked()!= true)){
        if(ui->radioButton_13->isChecked()== true){
            PreparedStatement* teststat3 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");
            teststat3->setString(1, label[0].toUtf8().constData());
            teststat3->setString(2, label[1].toUtf8().constData());
            ResultSet* testres3 = teststat3->executeQuery();
            testres3->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_13->text(), testres3->getInt("id_question"));
        }else if(ui->radioButton_14->isChecked()== true){
            PreparedStatement* teststat4 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");

            teststat4->setString(1, label[0].toUtf8().constData());
            teststat4->setString(2, label[1].toUtf8().constData());
            ResultSet* testres4 = teststat4->executeQuery();
            testres4->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_14->text(), testres4->getInt("id_question"));
        }else if(ui->radioButton_15->isChecked()== true){
            PreparedStatement* teststat5 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");

            teststat5->setString(1, label[0].toUtf8().constData());
            teststat5->setString(2, label[1].toUtf8().constData());
            ResultSet* testres5 = teststat5->executeQuery();
            testres5->next();
            AddPBdd(ui->lineEdit_2->text(),ui->radioButton_15->text(), testres5->getInt("id_question"));
        }
    }

    if(ui->lineEdit_3->text() != "" && (ui->radioButton_16->isChecked()!= true||ui->radioButton_17->isChecked()!= true||ui->radioButton_18->isChecked()!= true)){
        if(ui->radioButton_16->isChecked()== true){
            PreparedStatement* teststat6 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");

            teststat6->setString(1, label[0].toUtf8().constData());
            teststat6->setString(2, label[1].toUtf8().constData());
            ResultSet* testres6 = teststat6->executeQuery();
            testres6->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_17->text(), testres6->getInt("id_question"));
        }else if(ui->radioButton_17->isChecked()== true){
            PreparedStatement* teststat7 = connection->prepareStatement("SELECT * FROM Question WHERE nom_question=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");

            teststat7->setString(1, label[0].toUtf8().constData());
            teststat7->setString(2, label[1].toUtf8().constData());
            ResultSet* testres7 = teststat7->executeQuery();
            testres7->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_16->text(), testres7->getInt("id_question"));
        }else if(ui->radioButton_18->isChecked()== true){
            PreparedStatement* teststat8 = connection->prepareStatement("SELECT * FROM Question WHERE label1=? AND label2=?");
            QList<QString> label=ui->comboBox_quest->currentText().split(" : ");

            teststat8->setString(1, label[0].toUtf8().constData());
            teststat8->setString(2, label[1].toUtf8().constData());
            ResultSet* testres8 = teststat8->executeQuery();
            testres8->next();
            AddPBdd(ui->lineEdit_3->text(),ui->radioButton_18->text(), testres8->getInt("id_question"));
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
    std::cout<<"INSERT INTO Proposition (nom_proposition, reponse,id_question) VALUES ("<<text.toUtf8().constData()<<","<<response.toInt()<<","<<id_question<<")";
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

void MainWindow::on_buttonBox_3_accepted()
{

}

void MainWindow::on_Modification_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->tabWidget->setCurrentIndex(0);

    ui->combo_cat->clear();
    ui->combo_ques->clear();

    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    while( result->next()){
        ui->combo_cat->addItem(QString((result->getString("nom_categorie")).asStdString().data()));
        on_combo_cat_currentIndexChanged(ui->combo_cat->currentIndex());
    }
}

void MainWindow::on_combo_cat_currentIndexChanged(int index)
{
        ui->combo_ques->clear();
        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, (index+1));

        quesres = quesstat->executeQuery();
        ui->comboBox_quest->clear();
        while(quesres->next()){
            QString text = QString (((quesres->getString("label1"))+ " : "+(quesres->getString("label2"))).asStdString().data());
            ui->combo_ques->addItem(text);
            on_combo_ques_currentIndexChanged(text);

        }
}

void MainWindow::on_combo_ques_currentIndexChanged(QString text)
{
    ui->line_label1->clear();
    ui->line_label2->clear();

    if(text!=""){
        qDebug()<<text;
        QList<QString> label=text.split(" : ");
        ui->line_label1->setText(label[0].toUtf8().constData());
        ui->line_label2->setText(label[1].toUtf8().constData());

    }
}

void MainWindow::on_buttonBox_rejected()
{
    readtree();
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    /*if (index == 1){
        ui->combo_cat->clear();
        ui->combo_ques->clear();

        statement = connection->prepareStatement("SELECT * FROM Categorie");
        result = statement->executeQuery();

        while( result->next()){
            ui->combo_cat->addItem(QString((result->getString("nom_categorie")).asStdString().data()));
            on_combo_cat_currentIndexChanged(ui->combo_cat->currentIndex());
        }
    }else if(index == 2){

    }*/
}

void MainWindow::on_combo_cat_2_currentIndexChanged(const QString &arg1)
{

}
