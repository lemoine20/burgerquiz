/* ------------ déclaration des bibliothèque utilisé ------------*/
#include "Mainwindow.hpp"
#include <QCoreApplication>
#include <QtSql>
#include <iostream>

#define q2c(string) string.toStdString()

int main(int countArg, char **listArg)
{
    QCoreApplication app(countArg, listArg);
    //std::cout << std::flush;

    MainWindow w;
    w.show();

    return app.exec();
}
