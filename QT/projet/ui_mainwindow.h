/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *connection;
    QLabel *login;
    QLineEdit *lineEdit_pwd;
    QLabel *titre;
    QPushButton *pushButton;
    QLabel *pwd;
    QLabel *feuille;
    QLineEdit *lineEdit_login;
    QLabel *name;
    QLineEdit *lineEdit_name;
    QLabel *IP;
    QLineEdit *lineEdit_IP;
    QWidget *ajoutquestion;
    QPushButton *Annuler;
    QPushButton *Confirmer;
    QLineEdit *lineEdit_question_1;
    QLineEdit *lineEdit_question_2;
    QLineEdit *lineEdit_prop1;
    QLineEdit *lineEdit_prop2;
    QComboBox *comboBox_categorie;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_prop3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QWidget *Accueil;
    QPushButton *Deconnexion;
    QLabel *label;
    QPushButton *proposition;
    QPushButton *question;
    QTreeView *treeView;
    QPushButton *categorie;
    QMenuBar *menuBar;
    QMenu *menuAdmin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(551, 384);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 541, 321));
        connection = new QWidget();
        connection->setObjectName(QStringLiteral("connection"));
        login = new QLabel(connection);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(120, 180, 41, 21));
        lineEdit_pwd = new QLineEdit(connection);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setGeometry(QRect(210, 220, 113, 27));
        titre = new QLabel(connection);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(130, 10, 251, 17));
        pushButton = new QPushButton(connection);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 290, 99, 27));
        pwd = new QLabel(connection);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(90, 220, 91, 20));
        feuille = new QLabel(connection);
        feuille->setObjectName(QStringLiteral("feuille"));
        feuille->setGeometry(QRect(150, 40, 221, 17));
        lineEdit_login = new QLineEdit(connection);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(210, 180, 113, 27));
        name = new QLabel(connection);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 130, 91, 21));
        lineEdit_name = new QLineEdit(connection);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(210, 130, 113, 27));
        IP = new QLabel(connection);
        IP->setObjectName(QStringLiteral("IP"));
        IP->setGeometry(QRect(80, 90, 81, 21));
        lineEdit_IP = new QLineEdit(connection);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(210, 90, 113, 27));
        stackedWidget->addWidget(connection);
        ajoutquestion = new QWidget();
        ajoutquestion->setObjectName(QStringLiteral("ajoutquestion"));
        Annuler = new QPushButton(ajoutquestion);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(130, 280, 99, 27));
        Confirmer = new QPushButton(ajoutquestion);
        Confirmer->setObjectName(QStringLiteral("Confirmer"));
        Confirmer->setGeometry(QRect(330, 280, 99, 27));
        lineEdit_question_1 = new QLineEdit(ajoutquestion);
        lineEdit_question_1->setObjectName(QStringLiteral("lineEdit_question_1"));
        lineEdit_question_1->setGeometry(QRect(260, 80, 113, 27));
        lineEdit_question_2 = new QLineEdit(ajoutquestion);
        lineEdit_question_2->setObjectName(QStringLiteral("lineEdit_question_2"));
        lineEdit_question_2->setGeometry(QRect(260, 110, 113, 27));
        lineEdit_prop1 = new QLineEdit(ajoutquestion);
        lineEdit_prop1->setObjectName(QStringLiteral("lineEdit_prop1"));
        lineEdit_prop1->setGeometry(QRect(260, 140, 113, 27));
        lineEdit_prop2 = new QLineEdit(ajoutquestion);
        lineEdit_prop2->setObjectName(QStringLiteral("lineEdit_prop2"));
        lineEdit_prop2->setGeometry(QRect(260, 170, 113, 27));
        comboBox_categorie = new QComboBox(ajoutquestion);
        comboBox_categorie->setObjectName(QStringLiteral("comboBox_categorie"));
        comboBox_categorie->setGeometry(QRect(260, 40, 111, 27));
        label_2 = new QLabel(ajoutquestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 101, 17));
        label_3 = new QLabel(ajoutquestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 191, 20));
        label_4 = new QLabel(ajoutquestion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 80, 151, 17));
        label_5 = new QLabel(ajoutquestion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 80, 67, 17));
        label_6 = new QLabel(ajoutquestion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 110, 101, 17));
        label_7 = new QLabel(ajoutquestion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 181, 20));
        lineEdit_prop3 = new QLineEdit(ajoutquestion);
        lineEdit_prop3->setObjectName(QStringLiteral("lineEdit_prop3"));
        lineEdit_prop3->setGeometry(QRect(260, 200, 113, 27));
        radioButton = new QRadioButton(ajoutquestion);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(390, 140, 41, 22));
        radioButton_2 = new QRadioButton(ajoutquestion);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(430, 140, 41, 22));
        radioButton_3 = new QRadioButton(ajoutquestion);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(470, 140, 41, 22));
        radioButton_4 = new QRadioButton(ajoutquestion);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(430, 170, 41, 22));
        radioButton_5 = new QRadioButton(ajoutquestion);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(390, 170, 41, 22));
        radioButton_6 = new QRadioButton(ajoutquestion);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(470, 170, 41, 22));
        radioButton_7 = new QRadioButton(ajoutquestion);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(430, 200, 41, 22));
        radioButton_8 = new QRadioButton(ajoutquestion);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(390, 200, 41, 22));
        radioButton_9 = new QRadioButton(ajoutquestion);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(470, 200, 41, 22));
        stackedWidget->addWidget(ajoutquestion);
        Accueil = new QWidget();
        Accueil->setObjectName(QStringLiteral("Accueil"));
        Deconnexion = new QPushButton(Accueil);
        Deconnexion->setObjectName(QStringLiteral("Deconnexion"));
        Deconnexion->setGeometry(QRect(432, 20, 99, 27));
        label = new QLabel(Accueil);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(62, 0, 251, 17));
        proposition = new QPushButton(Accueil);
        proposition->setObjectName(QStringLiteral("proposition"));
        proposition->setGeometry(QRect(410, 140, 121, 27));
        question = new QPushButton(Accueil);
        question->setObjectName(QStringLiteral("question"));
        question->setGeometry(QRect(410, 100, 121, 27));
        treeView = new QTreeView(Accueil);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(2, 30, 401, 301));
        categorie = new QPushButton(Accueil);
        categorie->setObjectName(QStringLiteral("categorie"));
        categorie->setGeometry(QRect(410, 60, 121, 27));
        stackedWidget->addWidget(Accueil);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 551, 25));
        menuAdmin = new QMenu(menuBar);
        menuAdmin->setObjectName(QStringLiteral("menuAdmin"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAdmin->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login->setText(QApplication::translate("MainWindow", "login", 0));
        titre->setText(QApplication::translate("MainWindow", "ADMINISTRATION DU BURGER QUIZ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Valider", 0));
        pwd->setText(QApplication::translate("MainWindow", "password", 0));
        feuille->setText(QApplication::translate("MainWindow", "Connexion \303\240 la base de donn\303\251es", 0));
        name->setText(QApplication::translate("MainWindow", "Server name", 0));
        IP->setText(QApplication::translate("MainWindow", "Server IP", 0));
        Annuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        Confirmer->setText(QApplication::translate("MainWindow", "Confirmer", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ajout question", 0));
        label_3->setText(QApplication::translate("MainWindow", "Selectionner une cat\303\251gorie", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ajouter une question", 0));
        label_5->setText(QApplication::translate("MainWindow", ", ou", 0));
        label_6->setText(QApplication::translate("MainWindow", ", ou les deux", 0));
        label_7->setText(QApplication::translate("MainWindow", "Ajouter tois propositions", 0));
        radioButton->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_8->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_9->setText(QApplication::translate("MainWindow", "3", 0));
        Deconnexion->setText(QApplication::translate("MainWindow", "D\303\251connexion", 0));
        label->setText(QApplication::translate("MainWindow", "ADMINISTRATION DU BURGER QUIZ", 0));
        proposition->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        question->setText(QApplication::translate("MainWindow", "Ajout Question", 0));
#ifndef QT_NO_TOOLTIP
        treeView->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        categorie->setText(QApplication::translate("MainWindow", "Ajout cat\303\251gorie", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
