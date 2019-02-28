#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vehiculo.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //vector de vehiculos para guardarlos todos

private slots:
    void on_GuardarpushButton_clicked();

    void on_GenerarpushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
