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

    void on_GenerarpushButton_clicked();

    void on_CargarpushButton_clicked();



    void on_ResetpushButton_clicked();

private:
    Ui::MainWindow *ui;
    //Vector para guardar coches
    vector<vehiculo> garaje;
    vehiculo *coche = new vehiculo;
};

#endif // MAINWINDOW_H
