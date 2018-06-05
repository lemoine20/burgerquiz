#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>
#include <QtSql>
#include <iostream>


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


private slots:
        void on_Deconnexion_clicked();

        void on_pushButton_clicked();

        void on_Annuler_clicked();

        void on_Confirmer_clicked();

        void on_question_clicked();

private:
    Ui::MainWindow *ui;
    QMessageBox box;
    QWidget *Connection;
    QWidget *Accueil;
    QWidget *Question;
    QVBoxLayout *layout;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
};

#endif // MAINWINDOW_H
