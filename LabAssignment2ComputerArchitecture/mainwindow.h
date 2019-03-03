#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vehiculo.h>
#include "vehiculo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow , public vehiculo
{

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_GuardarpushButton_clicked();

    void on_GenerarpushButton_clicked(vehiculo *vehiculo);

private:
    Ui::MainWindow *ui;
    //vector de vehiculos para guardarlos todos
};

#endif // MAINWINDOW_H
