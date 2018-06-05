#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "connection.h"
#include <QDebug>

#define hostname "localhost"
#define dbname "Burger"
#define username "Burger"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);// Accès a la page de connection
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
    if(ui->lineEdit_IP->text() == hostname && ui->lineEdit_login->text() == username && ui->lineEdit_name->text()==dbname){
        db.setHostName(ui->lineEdit_IP->text());
        db.setDatabaseName(ui->lineEdit_login->text());
        db.setUserName(ui->lineEdit_name->text());
        db.setPassword(ui->lineEdit_pwd->text());
        if(db.open()){
            ui->stackedWidget->setCurrentIndex(2);// Accès à la page d'accueil
            std::cout << "Vous êtes maintenant connecté à " << q2c(db.hostName()) << std::endl;
          }else{
            std::cout << "La connexion a échouée, désolé :(" << std::endl << q2c(db.lastError().text()) << std::endl;
          }
    }else{
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
