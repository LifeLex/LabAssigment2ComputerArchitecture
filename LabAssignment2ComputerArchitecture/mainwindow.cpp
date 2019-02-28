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
    char matricula[8];
    string n="0123456789";
    string caracteres="BCDFGHJKLNMPQRSTVWXYZ";

    for (int i = 0; i <8; ++i) {
        if (i<4) {
            matricula[i]=n[rand()%n.length()];
        }
        if (i==4) {
            matricula[i]=' ';
        }
        if (i>4&&i<8) {
            matricula[i]=caracteres[rand()%caracteres.length()];
        }
    }
    nmatricula=string(matricula);
    ui->MatriculalineEdit->setText(QString::fromStdString(nmatricula));
    vehiculo->setMatricula(matricula)

}
