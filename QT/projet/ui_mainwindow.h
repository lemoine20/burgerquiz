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
#include <QtWidgets/QTreeWidget>
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
    QLineEdit *port;
    QLabel *label_13;
    QWidget *ajoutquestion;
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
    QPushButton *Annuler;
    QWidget *Accueil;
    QPushButton *Deconnexion;
    QLabel *label;
    QPushButton *proposition;
    QPushButton *question;
    QPushButton *categorie;
    QTreeWidget *treeWidget;
    QWidget *page;
    QLabel *label_8;
    QComboBox *comboBox_categorie_2;
    QLineEdit *lineEdit_prop2_2;
    QLineEdit *lineEdit_prop3_2;
    QLabel *label_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QPushButton *Confirmer_2;
    QRadioButton *radioButton_13;
    QLineEdit *lineEdit_prop1_2;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QLabel *label_10;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QLabel *label_12;
    QComboBox *comboBox_categorie_3;
    QPushButton *Annuler_2;
    QWidget *page_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menuAdmin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(685, 457);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 671, 391));
        connection = new QWidget();
        connection->setObjectName(QStringLiteral("connection"));
        login = new QLabel(connection);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(120, 180, 41, 21));
        lineEdit_pwd = new QLineEdit(connection);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setGeometry(QRect(210, 220, 231, 27));
        lineEdit_pwd->setEchoMode(QLineEdit::Password);
        titre = new QLabel(connection);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(190, 10, 251, 17));
        pushButton = new QPushButton(connection);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 290, 99, 27));
        pwd = new QLabel(connection);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(90, 220, 91, 20));
        feuille = new QLabel(connection);
        feuille->setObjectName(QStringLiteral("feuille"));
        feuille->setGeometry(QRect(210, 40, 221, 17));
        lineEdit_login = new QLineEdit(connection);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(210, 180, 231, 27));
        name = new QLabel(connection);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 130, 91, 21));
        lineEdit_name = new QLineEdit(connection);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(210, 130, 231, 27));
        IP = new QLabel(connection);
        IP->setObjectName(QStringLiteral("IP"));
        IP->setGeometry(QRect(80, 90, 111, 21));
        lineEdit_IP = new QLineEdit(connection);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(210, 90, 231, 27));
        port = new QLineEdit(connection);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(470, 90, 113, 27));
        label_13 = new QLabel(connection);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(450, 90, 16, 17));
        stackedWidget->addWidget(connection);
        ajoutquestion = new QWidget();
        ajoutquestion->setObjectName(QStringLiteral("ajoutquestion"));
        Confirmer = new QPushButton(ajoutquestion);
        Confirmer->setObjectName(QStringLiteral("Confirmer"));
        Confirmer->setGeometry(QRect(330, 350, 99, 27));
        lineEdit_question_1 = new QLineEdit(ajoutquestion);
        lineEdit_question_1->setObjectName(QStringLiteral("lineEdit_question_1"));
        lineEdit_question_1->setGeometry(QRect(260, 80, 211, 27));
        lineEdit_question_2 = new QLineEdit(ajoutquestion);
        lineEdit_question_2->setObjectName(QStringLiteral("lineEdit_question_2"));
        lineEdit_question_2->setGeometry(QRect(260, 110, 211, 27));
        lineEdit_prop1 = new QLineEdit(ajoutquestion);
        lineEdit_prop1->setObjectName(QStringLiteral("lineEdit_prop1"));
        lineEdit_prop1->setGeometry(QRect(182, 170, 261, 27));
        lineEdit_prop2 = new QLineEdit(ajoutquestion);
        lineEdit_prop2->setObjectName(QStringLiteral("lineEdit_prop2"));
        lineEdit_prop2->setGeometry(QRect(182, 240, 261, 27));
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
        label_5->setGeometry(QRect(490, 80, 67, 17));
        label_6 = new QLabel(ajoutquestion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 110, 101, 17));
        label_7 = new QLabel(ajoutquestion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 181, 20));
        lineEdit_prop3 = new QLineEdit(ajoutquestion);
        lineEdit_prop3->setObjectName(QStringLiteral("lineEdit_prop3"));
        lineEdit_prop3->setGeometry(QRect(180, 290, 261, 27));
        radioButton = new QRadioButton(ajoutquestion);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(250, 200, 41, 22));
        radioButton_2 = new QRadioButton(ajoutquestion);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(290, 200, 41, 22));
        radioButton_3 = new QRadioButton(ajoutquestion);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(330, 200, 41, 22));
        radioButton_4 = new QRadioButton(ajoutquestion);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(290, 270, 41, 22));
        radioButton_5 = new QRadioButton(ajoutquestion);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(250, 270, 41, 22));
        radioButton_6 = new QRadioButton(ajoutquestion);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(330, 270, 41, 22));
        radioButton_7 = new QRadioButton(ajoutquestion);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(290, 320, 41, 22));
        radioButton_8 = new QRadioButton(ajoutquestion);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(250, 320, 41, 22));
        radioButton_9 = new QRadioButton(ajoutquestion);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(330, 320, 41, 22));
        Annuler = new QPushButton(ajoutquestion);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(200, 350, 99, 27));
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
        categorie = new QPushButton(Accueil);
        categorie->setObjectName(QStringLiteral("categorie"));
        categorie->setGeometry(QRect(410, 60, 121, 27));
        treeWidget = new QTreeWidget(Accueil);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 381, 321));
        stackedWidget->addWidget(Accueil);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 150, 181, 20));
        comboBox_categorie_2 = new QComboBox(page);
        comboBox_categorie_2->setObjectName(QStringLiteral("comboBox_categorie_2"));
        comboBox_categorie_2->setGeometry(QRect(330, 50, 211, 27));
        lineEdit_prop2_2 = new QLineEdit(page);
        lineEdit_prop2_2->setObjectName(QStringLiteral("lineEdit_prop2_2"));
        lineEdit_prop2_2->setGeometry(QRect(252, 250, 261, 27));
        lineEdit_prop3_2 = new QLineEdit(page);
        lineEdit_prop3_2->setObjectName(QStringLiteral("lineEdit_prop3_2"));
        lineEdit_prop3_2->setGeometry(QRect(250, 300, 261, 27));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 20, 181, 17));
        radioButton_10 = new QRadioButton(page);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(400, 210, 41, 22));
        radioButton_11 = new QRadioButton(page);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(360, 280, 41, 22));
        radioButton_12 = new QRadioButton(page);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(360, 210, 41, 22));
        Confirmer_2 = new QPushButton(page);
        Confirmer_2->setObjectName(QStringLiteral("Confirmer_2"));
        Confirmer_2->setGeometry(QRect(430, 360, 99, 27));
        radioButton_13 = new QRadioButton(page);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(320, 280, 41, 22));
        lineEdit_prop1_2 = new QLineEdit(page);
        lineEdit_prop1_2->setObjectName(QStringLiteral("lineEdit_prop1_2"));
        lineEdit_prop1_2->setGeometry(QRect(252, 180, 261, 27));
        radioButton_14 = new QRadioButton(page);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setGeometry(QRect(320, 330, 41, 22));
        radioButton_15 = new QRadioButton(page);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setGeometry(QRect(320, 210, 41, 22));
        radioButton_16 = new QRadioButton(page);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));
        radioButton_16->setGeometry(QRect(400, 280, 41, 22));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 90, 151, 17));
        radioButton_17 = new QRadioButton(page);
        radioButton_17->setObjectName(QStringLiteral("radioButton_17"));
        radioButton_17->setGeometry(QRect(360, 330, 41, 22));
        radioButton_18 = new QRadioButton(page);
        radioButton_18->setObjectName(QStringLiteral("radioButton_18"));
        radioButton_18->setGeometry(QRect(400, 330, 41, 22));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 50, 191, 20));
        comboBox_categorie_3 = new QComboBox(page);
        comboBox_categorie_3->setObjectName(QStringLiteral("comboBox_categorie_3"));
        comboBox_categorie_3->setGeometry(QRect(330, 90, 211, 27));
        Annuler_2 = new QPushButton(page);
        Annuler_2->setObjectName(QStringLiteral("Annuler_2"));
        Annuler_2->setGeometry(QRect(210, 360, 99, 27));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 340, 99, 27));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 340, 99, 27));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 60, 151, 17));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 110, 371, 27));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 685, 25));
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

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login->setText(QApplication::translate("MainWindow", "login", 0));
        lineEdit_pwd->setText(QApplication::translate("MainWindow", "Burgerpwd", 0));
        titre->setText(QApplication::translate("MainWindow", "ADMINISTRATION DU BURGER QUIZ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Valider", 0));
        pwd->setText(QApplication::translate("MainWindow", "password", 0));
        feuille->setText(QApplication::translate("MainWindow", "Connexion \303\240 la base de donn\303\251es", 0));
        lineEdit_login->setText(QApplication::translate("MainWindow", "Burger", 0));
        name->setText(QApplication::translate("MainWindow", "Server name", 0));
        lineEdit_name->setText(QApplication::translate("MainWindow", "Burger", 0));
        IP->setText(QApplication::translate("MainWindow", "Server IP : port", 0));
        lineEdit_IP->setText(QApplication::translate("MainWindow", "172.0.0.1", 0));
        port->setText(QApplication::translate("MainWindow", "3606", 0));
        label_13->setText(QApplication::translate("MainWindow", ":", 0));
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
        Annuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        Deconnexion->setText(QApplication::translate("MainWindow", "D\303\251connexion", 0));
        label->setText(QApplication::translate("MainWindow", "ADMINISTRATION DU BURGER QUIZ", 0));
        proposition->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        question->setText(QApplication::translate("MainWindow", "Ajout Question", 0));
        categorie->setText(QApplication::translate("MainWindow", "Ajout cat\303\251gorie", 0));
        label_8->setText(QApplication::translate("MainWindow", "Ajouter tois propositions", 0));
        label_9->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        radioButton_10->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_11->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_12->setText(QApplication::translate("MainWindow", "2", 0));
        Confirmer_2->setText(QApplication::translate("MainWindow", "Confirmer", 0));
        radioButton_13->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_14->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_15->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_16->setText(QApplication::translate("MainWindow", "3", 0));
        label_10->setText(QApplication::translate("MainWindow", "Selectionner une question", 0));
        radioButton_17->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_18->setText(QApplication::translate("MainWindow", "3", 0));
        label_12->setText(QApplication::translate("MainWindow", "Selectionner une cat\303\251gorie", 0));
        Annuler_2->setText(QApplication::translate("MainWindow", "Annuler", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
        label_11->setText(QApplication::translate("MainWindow", "Ajouter une Cat\303\251gorie", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
