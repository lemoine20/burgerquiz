#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMainWindow>

namespace Ui {
class Connection;
}

class Connection : public QMainWindow
{
    Q_OBJECT

public:
    explicit Connection(QWidget *parent = 0);
    ~Connection();

private:
    Ui::Connection *ui;
};

#endif // CONNECTION_H
