#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>
#include <iostream>
#include <QVector>


#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>



#define q2c(string) string.toStdString()


using namespace std;
using namespace sql;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


void affichageTree(Connection* connection, PreparedStatement* statement = NULL, ResultSet* result = NULL);

void AddQBdd(int cat,QString Question1, QString Question2, QString Prop1, QString R1, QString Prop2, QString R2, QString Prop3, QString R3);

void readtree();
//void treeHeaderDoubleClick();

private slots:
        void on_Deconnexion_clicked();

        void on_pushButton_clicked();

        void on_Annuler_clicked();

        void on_Confirmer_clicked();

        void on_question_clicked();



        void on_categorie_clicked();

        void on_Confirmer_cat_clicked();

        void on_Annuler_cat_clicked();

        void on_proposition_clicked();

        void on_Annuler_2_clicked();

        void on_comboBox_cat_currentIndexChanged(int current_index);

        void on_confirmer_clicked();

        void AddPBdd(QString text, QString response, int id_question);

        void on_buttonBox_3_accepted();

        void on_Modification_clicked();

        void on_combo_cat_currentIndexChanged(int index);

        void on_combo_ques_currentIndexChanged(int index);

        void on_buttonBox_rejected();

private:
    Ui::MainWindow *ui;
    QMessageBox Alerte;
    QTreeWidgetItem* mItem;
    Driver* driver;
    QMessageBox succes;

    Connection* connection;
    PreparedStatement* catNom;
    ResultSet* catNo;

    PreparedStatement* quesNom;
    ResultSet* quesNo;

    PreparedStatement* quesMin;
    ResultSet* quesMi;

    PreparedStatement* quesstat;
    ResultSet* quesres;

    PreparedStatement* propNom;
    ResultSet* propNo;

    PreparedStatement* propstat;
    ResultSet* propres;

    PreparedStatement* statement = NULL;
    ResultSet* result = NULL;

    PreparedStatement* addqstatement = NULL;
    ResultSet* addqresult = NULL;

    PreparedStatement* idstatement = NULL;
    ResultSet* idresult = NULL;

    PreparedStatement* addpstatement = NULL;
    ResultSet* addpresult = NULL;

    PreparedStatement* addcstatement = NULL;
    ResultSet* addcresult = NULL;

};

#endif // MAINWINDOW_H
