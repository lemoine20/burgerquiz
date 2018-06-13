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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_8;
    QLabel *label_9;
    QWidget *ajoutquestion;
    QPushButton *Confirmer;
    QLineEdit *lineEdit_question_1;
    QLineEdit *lineEdit_question_2;
    QComboBox *comboBox_categorie;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *Annuler;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_prop1;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_prop2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_prop3;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_9;
    QWidget *Accueil;
    QPushButton *Deconnexion;
    QLabel *label;
    QPushButton *proposition;
    QPushButton *question;
    QPushButton *categorie;
    QTreeWidget *treeWidget;
    QWidget *page;
    QLabel *label_10;
    QLineEdit *lineEdit_ajoutCat;
    QLabel *label_11;
    QPushButton *Annuler_cat;
    QPushButton *Confirmer_cat;
    QWidget *page_2;
    QPushButton *confirmer;
    QPushButton *Annuler_2;
    QComboBox *comboBox_cat;
    QComboBox *comboBox_quest;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_3;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_18;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menuBar;
    QMenu *menuAdmin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(618, 409);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 601, 341));
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
        IP->setGeometry(QRect(80, 90, 81, 21));
        lineEdit_IP = new QLineEdit(connection);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(210, 90, 231, 27));
        port = new QLineEdit(connection);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(460, 90, 51, 27));
        label_8 = new QLabel(connection);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 90, 67, 17));
        label_9 = new QLabel(connection);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(440, 90, 16, 17));
        stackedWidget->addWidget(connection);
        ajoutquestion = new QWidget();
        ajoutquestion->setObjectName(QStringLiteral("ajoutquestion"));
        Confirmer = new QPushButton(ajoutquestion);
        Confirmer->setObjectName(QStringLiteral("Confirmer"));
        Confirmer->setGeometry(QRect(330, 280, 99, 27));
        lineEdit_question_1 = new QLineEdit(ajoutquestion);
        lineEdit_question_1->setObjectName(QStringLiteral("lineEdit_question_1"));
        lineEdit_question_1->setGeometry(QRect(260, 80, 113, 27));
        lineEdit_question_2 = new QLineEdit(ajoutquestion);
        lineEdit_question_2->setObjectName(QStringLiteral("lineEdit_question_2"));
        lineEdit_question_2->setGeometry(QRect(260, 110, 113, 27));
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
        Annuler = new QPushButton(ajoutquestion);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(140, 280, 99, 27));
        horizontalLayoutWidget = new QWidget(ajoutquestion);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(260, 140, 251, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_prop1 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_prop1->setObjectName(QStringLiteral("lineEdit_prop1"));

        horizontalLayout->addWidget(lineEdit_prop1);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        horizontalLayoutWidget_2 = new QWidget(ajoutquestion);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(260, 180, 251, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_prop2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_prop2->setObjectName(QStringLiteral("lineEdit_prop2"));

        horizontalLayout_2->addWidget(lineEdit_prop2);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_2->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton_6 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_2->addWidget(radioButton_6);

        horizontalLayoutWidget_3 = new QWidget(ajoutquestion);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(260, 220, 251, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_prop3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_prop3->setObjectName(QStringLiteral("lineEdit_prop3"));

        horizontalLayout_3->addWidget(lineEdit_prop3);

        radioButton_8 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_3->addWidget(radioButton_8);

        radioButton_7 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_3->addWidget(radioButton_7);

        radioButton_9 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout_3->addWidget(radioButton_9);

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
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 20, 131, 17));
        lineEdit_ajoutCat = new QLineEdit(page);
        lineEdit_ajoutCat->setObjectName(QStringLiteral("lineEdit_ajoutCat"));
        lineEdit_ajoutCat->setGeometry(QRect(220, 70, 211, 27));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 70, 111, 17));
        Annuler_cat = new QPushButton(page);
        Annuler_cat->setObjectName(QStringLiteral("Annuler_cat"));
        Annuler_cat->setGeometry(QRect(90, 290, 99, 27));
        Confirmer_cat = new QPushButton(page);
        Confirmer_cat->setObjectName(QStringLiteral("Confirmer_cat"));
        Confirmer_cat->setGeometry(QRect(300, 290, 99, 27));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        confirmer = new QPushButton(page_2);
        confirmer->setObjectName(QStringLiteral("confirmer"));
        confirmer->setGeometry(QRect(400, 300, 99, 27));
        Annuler_2 = new QPushButton(page_2);
        Annuler_2->setObjectName(QStringLiteral("Annuler_2"));
        Annuler_2->setGeometry(QRect(140, 300, 99, 27));
        comboBox_cat = new QComboBox(page_2);
        comboBox_cat->setObjectName(QStringLiteral("comboBox_cat"));
        comboBox_cat->setGeometry(QRect(334, 70, 131, 27));
        comboBox_quest = new QComboBox(page_2);
        comboBox_quest->setObjectName(QStringLiteral("comboBox_quest"));
        comboBox_quest->setGeometry(QRect(334, 120, 131, 27));
        horizontalLayoutWidget_4 = new QWidget(page_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(240, 170, 321, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        radioButton_10 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));

        horizontalLayout_4->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));

        horizontalLayout_4->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));

        horizontalLayout_4->addWidget(radioButton_12);

        horizontalLayoutWidget_5 = new QWidget(page_2);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(240, 210, 321, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);

        radioButton_13 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));

        horizontalLayout_5->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));

        horizontalLayout_5->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));

        horizontalLayout_5->addWidget(radioButton_15);

        horizontalLayoutWidget_6 = new QWidget(page_2);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(240, 250, 321, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);

        radioButton_17 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_17->setObjectName(QStringLiteral("radioButton_17"));

        horizontalLayout_6->addWidget(radioButton_17);

        radioButton_16 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));

        horizontalLayout_6->addWidget(radioButton_16);

        radioButton_18 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_18->setObjectName(QStringLiteral("radioButton_18"));

        horizontalLayout_6->addWidget(radioButton_18);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(220, 20, 121, 17));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 80, 111, 17));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 130, 111, 17));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(70, 180, 121, 17));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 618, 25));
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
        titre->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Valider", 0));
        pwd->setText(QApplication::translate("MainWindow", "password", 0));
        feuille->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lineEdit_login->setText(QApplication::translate("MainWindow", "Burger", 0));
        name->setText(QApplication::translate("MainWindow", "nom serveur", 0));
        lineEdit_name->setText(QApplication::translate("MainWindow", "Burger", 0));
        IP->setText(QApplication::translate("MainWindow", "servert Name", 0));
        lineEdit_IP->setText(QApplication::translate("MainWindow", "localhost", 0));
        port->setText(QApplication::translate("MainWindow", "3306", 0));
        label_8->setText(QApplication::translate("MainWindow", "port", 0));
        label_9->setText(QApplication::translate("MainWindow", ":", 0));
        Confirmer->setText(QApplication::translate("MainWindow", "Confirmer", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ajout question", 0));
        label_3->setText(QApplication::translate("MainWindow", "Selectionner une cat\303\251gorie", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ajouter une question", 0));
        label_5->setText(QApplication::translate("MainWindow", ", ou", 0));
        label_6->setText(QApplication::translate("MainWindow", ", ou les deux", 0));
        label_7->setText(QApplication::translate("MainWindow", "Ajouter tois propositions", 0));
        Annuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        radioButton->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_8->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_9->setText(QApplication::translate("MainWindow", "3", 0));
        Deconnexion->setText(QApplication::translate("MainWindow", "D\303\251connexion", 0));
        label->setText(QApplication::translate("MainWindow", "ADMINISTRATION DU BURGER QUIZ", 0));
        proposition->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        question->setText(QApplication::translate("MainWindow", "Ajout Question", 0));
        categorie->setText(QApplication::translate("MainWindow", "Ajout cat\303\251gorie", 0));
        label_10->setText(QApplication::translate("MainWindow", "AJOUT CATEGORIE", 0));
        label_11->setText(QApplication::translate("MainWindow", "Ajout Cat\303\251gorie", 0));
        Annuler_cat->setText(QApplication::translate("MainWindow", "Annuler", 0));
        Confirmer_cat->setText(QApplication::translate("MainWindow", "Confirmer", 0));
        confirmer->setText(QApplication::translate("MainWindow", "confirmer", 0));
        Annuler_2->setText(QApplication::translate("MainWindow", "Annuler", 0));
        radioButton_10->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_11->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_12->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_13->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_14->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_15->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_17->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_16->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_18->setText(QApplication::translate("MainWindow", "3", 0));
        label_12->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        label_13->setText(QApplication::translate("MainWindow", "Choix categorie", 0));
        label_14->setText(QApplication::translate("MainWindow", "Choix Question", 0));
        label_15->setText(QApplication::translate("MainWindow", "Ajout proposition", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
