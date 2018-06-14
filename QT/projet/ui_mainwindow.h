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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
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
#include <QtWidgets/QTabWidget>
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
    QPushButton *Modification;
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
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *combo_cat;
    QComboBox *combo_ques;
    QLineEdit *line_label1;
    QLineEdit *line_label2;
    QDialogButtonBox *buttonBox;
    QLabel *label_16;
    QCheckBox *invisible_q;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *tab_3;
    QLabel *label_21;
    QComboBox *combo_ques_2;
    QComboBox *combo_cat_2;
    QLabel *label_22;
    QComboBox *combo_prop_2;
    QLabel *label_23;
    QCheckBox *invisible_p;
    QDialogButtonBox *buttonBox_2;
    QLineEdit *prop;
    QLabel *label_27;
    QLabel *label_29;
    QWidget *tab_2;
    QComboBox *combo_ques_3;
    QDialogButtonBox *buttonBox_3;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *combo_prop_3;
    QLabel *label_26;
    QComboBox *combo_cat_3;
    QLabel *label_28;
    QLabel *reponse;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QLabel *label_30;
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
        titre->setGeometry(QRect(250, 10, 121, 20));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setBold(true);
        font.setWeight(75);
        titre->setFont(font);
        pushButton = new QPushButton(connection);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 290, 99, 27));
        pwd = new QLabel(connection);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(90, 220, 91, 20));
        feuille = new QLabel(connection);
        feuille->setObjectName(QStringLiteral("feuille"));
        feuille->setGeometry(QRect(200, 40, 231, 20));
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
        Modification = new QPushButton(Accueil);
        Modification->setObjectName(QStringLiteral("Modification"));
        Modification->setGeometry(QRect(430, 180, 99, 27));
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
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        combo_cat = new QComboBox(tab);
        combo_cat->setObjectName(QStringLiteral("combo_cat"));
        combo_cat->setGeometry(QRect(290, 60, 131, 27));
        combo_ques = new QComboBox(tab);
        combo_ques->setObjectName(QStringLiteral("combo_ques"));
        combo_ques->setGeometry(QRect(290, 100, 131, 27));
        line_label1 = new QLineEdit(tab);
        line_label1->setObjectName(QStringLiteral("line_label1"));
        line_label1->setGeometry(QRect(290, 140, 231, 27));
        line_label2 = new QLineEdit(tab);
        line_label2->setObjectName(QStringLiteral("line_label2"));
        line_label2->setGeometry(QRect(290, 170, 231, 27));
        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(190, 260, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(190, 20, 191, 17));
        invisible_q = new QCheckBox(tab);
        invisible_q->setObjectName(QStringLiteral("invisible_q"));
        invisible_q->setGeometry(QRect(300, 220, 211, 22));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 60, 171, 17));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 100, 241, 20));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(190, 140, 67, 17));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(190, 170, 67, 17));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 60, 171, 17));
        combo_ques_2 = new QComboBox(tab_3);
        combo_ques_2->setObjectName(QStringLiteral("combo_ques_2"));
        combo_ques_2->setGeometry(QRect(310, 100, 131, 27));
        combo_cat_2 = new QComboBox(tab_3);
        combo_cat_2->setObjectName(QStringLiteral("combo_cat_2"));
        combo_cat_2->setGeometry(QRect(310, 60, 131, 27));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(100, 100, 161, 20));
        combo_prop_2 = new QComboBox(tab_3);
        combo_prop_2->setObjectName(QStringLiteral("combo_prop_2"));
        combo_prop_2->setGeometry(QRect(310, 140, 131, 27));
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(30, 140, 261, 20));
        invisible_p = new QCheckBox(tab_3);
        invisible_p->setObjectName(QStringLiteral("invisible_p"));
        invisible_p->setGeometry(QRect(310, 230, 211, 22));
        buttonBox_2 = new QDialogButtonBox(tab_3);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(200, 270, 176, 27));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        prop = new QLineEdit(tab_3);
        prop->setObjectName(QStringLiteral("prop"));
        prop->setGeometry(QRect(320, 180, 113, 27));
        label_27 = new QLabel(tab_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(120, 190, 151, 20));
        label_29 = new QLabel(tab_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(180, 20, 211, 17));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        combo_ques_3 = new QComboBox(tab_2);
        combo_ques_3->setObjectName(QStringLiteral("combo_ques_3"));
        combo_ques_3->setGeometry(QRect(350, 110, 131, 27));
        buttonBox_3 = new QDialogButtonBox(tab_2);
        buttonBox_3->setObjectName(QStringLiteral("buttonBox_3"));
        buttonBox_3->setGeometry(QRect(240, 280, 176, 27));
        buttonBox_3->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(140, 110, 161, 20));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(140, 70, 171, 17));
        combo_prop_3 = new QComboBox(tab_2);
        combo_prop_3->setObjectName(QStringLiteral("combo_prop_3"));
        combo_prop_3->setGeometry(QRect(350, 150, 131, 27));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(130, 150, 181, 20));
        combo_cat_3 = new QComboBox(tab_2);
        combo_cat_3->setObjectName(QStringLiteral("combo_cat_3"));
        combo_cat_3->setGeometry(QRect(350, 70, 131, 27));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(200, 190, 111, 20));
        reponse = new QLabel(tab_2);
        reponse->setObjectName(QStringLiteral("reponse"));
        reponse->setGeometry(QRect(330, 190, 67, 17));
        horizontalLayoutWidget_7 = new QWidget(tab_2);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(200, 220, 209, 24));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        radioButton1 = new QRadioButton(horizontalLayoutWidget_7);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));

        horizontalLayout_7->addWidget(radioButton1);

        radioButton2 = new QRadioButton(horizontalLayoutWidget_7);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));

        horizontalLayout_7->addWidget(radioButton2);

        radioButton3 = new QRadioButton(horizontalLayoutWidget_7);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));

        horizontalLayout_7->addWidget(radioButton3);

        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(200, 20, 181, 17));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_3);
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

        stackedWidget->setCurrentIndex(5);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login->setText(QApplication::translate("MainWindow", "login", 0));
        lineEdit_pwd->setText(QApplication::translate("MainWindow", "Burgerpwd", 0));
        titre->setText(QApplication::translate("MainWindow", "BURGER QUIZ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Valider", 0));
        pwd->setText(QApplication::translate("MainWindow", "password", 0));
        feuille->setText(QApplication::translate("MainWindow", "Connection \303\240 la base de donn\303\251es", 0));
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
        Modification->setText(QApplication::translate("MainWindow", "Modification", 0));
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
        label_16->setText(QApplication::translate("MainWindow", "Modification de la question", 0));
        invisible_q->setText(QApplication::translate("MainWindow", "rendre la question invisible", 0));
        label_17->setText(QApplication::translate("MainWindow", "Selection de la categorie", 0));
        label_18->setText(QApplication::translate("MainWindow", "Selection de la question a modifier", 0));
        label_19->setText(QApplication::translate("MainWindow", "Label1", 0));
        label_20->setText(QApplication::translate("MainWindow", "Label2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "question", 0));
        label_21->setText(QApplication::translate("MainWindow", "Selection de la categorie", 0));
        label_22->setText(QApplication::translate("MainWindow", "Selection de la question", 0));
        label_23->setText(QApplication::translate("MainWindow", "Selection de la proposition \303\240 modifier", 0));
        invisible_p->setText(QApplication::translate("MainWindow", "rendre la proposition invisible", 0));
        label_27->setText(QApplication::translate("MainWindow", "Nouvelle proposition", 0));
        label_29->setText(QApplication::translate("MainWindow", "Modification de la proposition", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "proposition", 0));
        label_24->setText(QApplication::translate("MainWindow", "Selection de la question", 0));
        label_25->setText(QApplication::translate("MainWindow", "Selection de la categorie", 0));
        label_26->setText(QApplication::translate("MainWindow", "Selection de la proposition", 0));
        label_28->setText(QApplication::translate("MainWindow", "la reponse est : ", 0));
        reponse->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        radioButton1->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton2->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton3->setText(QApplication::translate("MainWindow", "3", 0));
        label_30->setText(QApplication::translate("MainWindow", "Modification de la r\303\251ponse", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "reponse", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
