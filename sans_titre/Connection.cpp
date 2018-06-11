#include "Connection.h"
#include "ui_Connection.h"

Connection::Connection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Connection)
{
    ui->setupUi(this);
}

Connection::~Connection()
{
    delete ui;
}
