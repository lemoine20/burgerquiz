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
    if(ui->lineEdit_IP->text() == hostname && ui->lineEdit_login->text() == username && ui->lineEdit_name->text()==dbname){
        db.setHostName(ui->lineEdit_IP->text());
        db.setDatabaseName(ui->lineEdit_login->text());
        db.setUserName(ui->lineEdit_name->text());
        db.setPassword(ui->lineEdit_pwd->text());
        if(db.open()){
            ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
            std::cout << "Vous êtes maintenant connecté à " << q2c(db.hostName()) << std::endl;

                affichageTree();

          }else{
            std::cout << "La connexion a échouée, désolé :(" << std::endl << q2c(db.lastError().text()) << std::endl;
          }
    }else{
        Alerte.setText("erreur de saisie");
        Alerte.exec();
        std::cout<<"erreur de saisie"<<std::endl;
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



void MainWindow::AddRoot(QString name, QString Description){
    //QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
   // itm->setText();
}

void MainWindow::Addchild(QTreeWidgetItem * parent, QString name, QString Description){

}


void MainWindow::affichageTree(){
    categorie.prepare("SELECT id_categorie FROM Categorie ORDER BY id_categorie DESC LIMIT 1;");
    int catNo = categorie.exec();
    qDebug()<<catNo;
    categorie.prepare("SELECT * FROM Categorie;");
    categorie.exec();
   // int catNo = Categorie.record().indexOf("id_categorie");

    for(unsigned i = 0; i< catNo; ++i){
        cat<<categorie.value(i).toString();
        qDebug()<<"coucou";
        QTreeWidgetItem* mItem = new QTreeWidgetItem(ui->treeWidget);
        mItem->setText(1, cat[i]);
        question.prepare("SELECT * FROM Question WHERE id_categorie = catNO;");
        question.exec();

        int quesNo = question.record().indexOf("id_question");

        QFileSystemModel *model = new QFileSystemModel;
           model->setRootPath(QDir::currentPath());


        for(unsigned j = 0; j=quesNo; ++j){
            quest<<question.value(i).toString();
            proposition.prepare("SELECT * FROM Proposition WHERE id_question = quesNo;");
            proposition.exec();
            //int propNo = proposition.record().indexOf("id_proposition");

            //for(unsigned k = 0; k=quesNo; ++k)

       }
   }
}
