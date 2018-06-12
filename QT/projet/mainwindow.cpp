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
    ui->stackedWidget->setCurrentIndex(0);// Accès a la page de connection
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_IP->setPlaceholderText(hostname);
    ui->lineEdit_login->setPlaceholderText(username);
    ui->lineEdit_name->setPlaceholderText(dbname);

    Driver* driver;
    Connection* connection;
    PreparedStatement* statement = NULL;
    ResultSet* result = NULL;

    try
    {
      // Connection.
      //  std::cout<<("tcp://" + ui->lineEdit_IP->text() + ":" + ui->port->text()).toStdString() <<"," <<ui->lineEdit_login->text().toStdString()<<"," <<ui->lineEdit_pwd->text().toStdString();

      driver = get_driver_instance();
      connection = driver->connect(("tcp://" + ui->lineEdit_IP->text() + ":" +
        ui->port->text()).toStdString(), ui->lineEdit_login->text().toStdString(),
        ui->lineEdit_pwd->text().toStdString());
      if (connection){
          ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
            connection->setSchema(ui->lineEdit_name->text().toStdString());
              affichageTree(connection,
                      statement = NULL,
                      result = NULL);

      }

     /* // Diconnect.
      delete connection;*/
    }
    catch (SQLException& e)
    {
      cout << "Error: " << e.what() << "." << endl;
      return;
    }

}

void MainWindow::on_Annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
}

void MainWindow::on_Confirmer_clicked(){
    if(ui->lineEdit_question_1->text() != "" ||ui->lineEdit_question_2->text() != "" || ui->lineEdit_prop1->text() != "" || ui->lineEdit_prop2->text() != "" || ui->lineEdit_prop3->text() != ""){
        ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
    }
}

void MainWindow::on_question_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);// Accès à la page d'ajout de question
}



/*void MainWindow::AddRoot(QString name, QString Description){
    //QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
   // itm->setText();
}

void MainWindow::Addchild(QTreeWidgetItem * parent, QString name, QString Description){

}*/


void MainWindow::affichageTree(Connection* connection, PreparedStatement* statement, ResultSet* result){
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    PreparedStatement* catNom;
    ResultSet* catNo;

    PreparedStatement* quesNom;
    ResultSet* quesNo;

    PreparedStatement* quesstat;
    ResultSet* quesres;

    PreparedStatement* propNom;
    ResultSet* propNo;

    PreparedStatement* propstat;
    ResultSet* propres;

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
   // std::cout<<catNo->getInt("id_categorie");
    for(int i = 1; i < catNo->getInt("id_categorie"); ++i){
        result->next();

        //cat<<categorie.value(i).toString();
        qDebug()<<result->getString("nom_categorie").asStdString().data();
        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        quesNom = connection->prepareStatement("SELECT count(*) FROM Question WHERE id_categorie=?");
        quesNom->setInt(1, i);

        quesNo = quesNom->executeQuery();
        quesNo->next();
        //std::cout<<quesNo->getInt(1);

        /*int quesNo = question.record().indexOf("id_question");
        QFileSystemModel *model = new QFileSystemModel;
           model->setRootPath(QDir::currentPath());*/
        quesstat = connection->prepareStatement("SELECT * FROM Question WHERE id_categorie=?");
        quesstat->setInt(1, i);

        quesres = quesstat->executeQuery();

        for(int j = 1; j<(quesNo->getInt(1)); ++j){


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


            propstat = connection->prepareStatement("SELECT * FROM Proposition WHERE id_question=?");
            propstat->setInt(1, j);

            propres = propstat->executeQuery();

            for(int k = 1; k<(propNo->getInt(1)); ++k){
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
