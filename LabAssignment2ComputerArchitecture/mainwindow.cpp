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

    //atributos locales
    //Main Config
    string lNombre;
    string lRuedas;
    string lHP;
    string lFuel;
    string lRuedaRepuesto;
    string lKitReparacion;
    string lColor;

    //Accesorios
    string lBurbuja;
    string lPortavasos;
    string lNumeroBocinas;

    //guardo el texto de la interfaz en los atributos locales
    //nombre
    QString QSNombre = ui->nombreLineEdit->text();
    lNombre = QSNombre.toStdString();
    //ruedas
    lRuedas = ui->NRuedascomboBox->currentText().toStdString();
    //HP
    int lPotencia = ui->HPSlider->value();
    lHP = to_string(lPotencia);
    //Color
    lColor = ui->ColorcomboBox->currentText().toStdString();
    //Rueda o Kit
    if (ui->RuedaRpuestoradioButton->isChecked()) {
        lRuedaRepuesto = "Rueda de Repuesto";
    }
    if (ui->KitRadioButton->isChecked()) {
        lKitReparacion = "Kit de Reparacion";
    }
    //Fuel
    lFuel = ui->CombustiblecomboBox->currentText().toStdString();
    //
    //Accesorios
    //Portavasos
    if (ui->PortavasoscheckBox->isChecked()) {
        lPortavasos = "Portavasos";
    }
    //Burbuja
    if (ui->BurbujacheckBox->isChecked()) {
        lBurbuja= "Burbuja";
    }
    //Bocinas
    lNumeroBocinas= ui->BocinasspinBox->value();
    //Problemas con el lNumeroBocinas no guarda el valor




    //Logica para identificar tipo de vehiculo
    //El coche de homer tendra Burbuja Posavasos Color Verde y mas de 5 bocinas
    if (lRuedas=="4" && lColor=="Verde" && ui->BurbujacheckBox->isChecked() && ui->PortavasoscheckBox->isChecked()) {
        //Coche de homer en plaiText o en lista

    }

    if (lRuedas=="4") {
        //Coche
    }
    if (lRuedas== "2") {
        //Moto
    }



    //Setters
    coche->setNombre(lNombre);
    coche->setRuedas(lRuedas);
    coche->setHP(lHP);
    coche->setColor(lColor);
    coche->setRuedaRepuesto(lRuedaRepuesto);
    coche->setKitReparcion(lKitReparacion);
    coche->setFuel(lFuel);
    coche->setPortavasos(lPortavasos);
    coche->setBurbuja(lBurbuja);
    coche->setNumeroBocinas(lNumeroBocinas);
    //Guardar coche
    garaje.push_back(*coche);

    //Numero de coches guardados
    int n = garaje.size();
    ui->VehiculosGuardadoslcdNumber->display(n);
    //Le asigno el numero maximo de vehiculos al spinbox de cargar
    ui->VehiculoGuardadoCargarspinBox->setMaximum(n);
    //Guardar en la lista
    ui->textEdit->setPlainText(QString::fromStdString(coche->toString()));

}

void MainWindow::on_GenerarpushButton_clicked()
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


}
