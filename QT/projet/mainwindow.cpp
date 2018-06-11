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
    ui->treeWidget->setHeaderHidden(true);
    std::cout<< ui->stackedWidget->currentIndex();

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


void MainWindow::affichageTree(Connection* connection, PreparedStatement* statement, ResultSet* result){
    statement = connection->prepareStatement("SELECT * FROM Categorie");
    result = statement->executeQuery();

    PreparedStatement* catNom;
    ResultSet* catNo;

    PreparedStatement* quesNom;
    ResultSet* quesNo;

    /*PreparedStatement* catNom;
    ResultSet* catNo;*/

    catNom = connection->prepareStatement("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1");
    catNo = catNom->executeQuery();
    catNo->next();
    std::cout<<catNo->getInt("id_categorie");
    for(int i = 0; i < catNo->getInt("id_categorie"); ++i){
        result->next();

        //cat<<categorie.value(i).toString();
        qDebug()<<result->getString("nom_categorie").asStdString().data();
        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(0, QString(result->getString("nom_categorie").asStdString().data()));
        ui->treeWidget->show();

        //quesNom = connection->prepareStatement("SELECT count(*) FROM Question WHERE id_categorie=? ORDER BY id_question DESC LIMIT 1");

        qDebug()<<quesNom->setInt(1, i);

        quesNo = quesNom->executeQuery();
        qDebug()<<quesNo;
        quesNo->next();
        qDebug()<<quesNo->getInt("id_question");

        /*int quesNo = question.record().indexOf("id_question");

        QFileSystemModel *model = new QFileSystemModel;
           model->setRootPath(QDir::currentPath());*/


        //for(unsigned j = 0; j<quesNo->getInt("id_question"); ++j){
           /* quest<<question.value(i).toString();*/
            /*proposition.prepare("SELECT * FROM Proposition WHERE id_question = quesNo;");
            proposition.exec();*/
            //int propNo = proposition.record().indexOf("id_proposition");

            //for(unsigned k = 0; k=quesNo; ++k)

       //}
   }
}

