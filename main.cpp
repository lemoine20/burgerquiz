/* ------------ déclaration des bibliothèque utilisé ------------*/
#include <QCoreApplication>
#include <QtSql>
#include <iostream>

#define q2c(string) string.toStdString()

int main(int countArg, char **listArg)
{
    QCoreApplication app(countArg, listArg);
    std::cout << std::flush;
    return app.exec();
}
