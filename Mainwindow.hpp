#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QtWidgets>


class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  QGroupBox * BuildGroupBoxControle();

private:
  // Ui::MainWindow *ui;
  QWidget * widget_general;
  QMenu * menuFichier;

};

#endif // MAINWINDOW_H
