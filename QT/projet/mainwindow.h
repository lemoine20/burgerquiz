#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>
#include <QtSql>
#include <iostream>
#include <QVector>

#define q2c(string) string.toStdString()

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void affichageTree();

private slots:
        void on_Deconnexion_clicked();

        void on_pushButton_clicked();

        void on_Annuler_clicked();

        void on_Confirmer_clicked();

        void on_question_clicked();

        void AddRoot(QString name, QString Description);

        void Addchild(QTreeWidgetItem * parent, QString name, QString Description);

private:
    Ui::MainWindow *ui;
    QMessageBox Alerte;
    /*QWidget *Connection;
    QWidget *Accueil;
    QWidget *Question;
    QVBoxLayout *layout;*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery categorie, question, proposition;
    QVector<QString> quest;
    QVector<QString> cat;

    QTreeWidgetItem* mItem;
};

#endif // MAINWINDOW_H
