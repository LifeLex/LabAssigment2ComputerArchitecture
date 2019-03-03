#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vehiculo.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_GuardarpushButton_clicked()
{



}

void MainWindow::on_GenerarpushButton_clicked(vehiculo *vehiculo)
{
    srand(time(NULL));
    string nmatricula;
    string n="0123456789";
    string caracteres="BCDFGHJKLNMPQRSTVWXYZ";
    string espacio=" ";

    for (int i = 0; i <8; ++i) {
        if (i<4) {

             nmatricula.push_back(n[rand()%n.length()]);
        }
        if (i==4) {

            nmatricula.append(espacio);
        }
        if (i>4&&i<8) {
             nmatricula.push_back(caracteres[rand()%caracteres.length()]);
        }
    }

    ui->MatriculalineEdit->setText(QString::fromStdString(nmatricula));
    //vehiculo->setMatricula(matricula);

}
