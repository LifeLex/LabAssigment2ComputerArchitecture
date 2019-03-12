#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vehiculo.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->isReadOnly();

}

MainWindow::~MainWindow()
{
    delete ui;
}


//GUARDAR
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

    QString QSNombre = ui->nombreLineEdit->text();
    lNombre = QSNombre.toStdString();
    ui->nombreLineEdit->setText("");
    //ruedas
    lRuedas = ui->NRuedascomboBox->currentText().toStdString();
    //HP
    ui->HPSlider->setRange(0,999);
    int lPotencia = ui->HPSlider->value();

    lHP = to_string(lPotencia);
    //Color
    lColor = ui->ColorcomboBox->currentText().toStdString();
    //Rueda o Kit
    if (ui->RuedaRpuestoradioButton->isChecked()) {
        lRuedaRepuesto = "Rueda de Repuesto";
        lKitReparacion = "Sin Kit de Reparacion";
    } else if (ui->KitRadioButton->isChecked()) {
        lKitReparacion = "Kit de Reparacion";
        lRuedaRepuesto= "Sin rueda de repuesto";
    }
    //Fuel
    lFuel = ui->CombustiblecomboBox->currentText().toStdString();
    //
    //Accesorios
    //Portavasos
    if (ui->PortavasoscheckBox->isChecked()) {
        lPortavasos = "Portavasos";
    }else {
        lPortavasos= "Coche sin Portavasos";
    }
    //Burbuja
    if (ui->BurbujacheckBox->isChecked()) {
        lBurbuja= "Burbuja";
    }else {
        lBurbuja= "Coche sin Burbuja";
    }
    //Bocinas
    int bocinas= ui->BocinasspinBox->value();
    lNumeroBocinas = std::to_string(bocinas);
    //Problemas con el lNumeroBocinas no guarda el valor




    //Logica para identificar tipo de vehiculo
    //El coche de homer tendra Burbuja Posavasos Color Verde y mas de 5 bocinas
    if (lRuedas=="30" && lColor=="Verde" && ui->BurbujacheckBox->isChecked() && ui->PortavasoscheckBox->isChecked() && lNumeroBocinas=="5") {
        //Coche de homer
        ui->lineEdit->setText("EL CARRO DE HOMERO");
        coche->setOpcion("EL CARRO DE HOMERO");
    }

    if (lRuedas=="4") {
        //Coche
        ui->lineEdit->setText("Un coche");
        coche->setOpcion("Un coche");
    }
    if (lRuedas== "2") {
        //Moto
        ui->lineEdit->setText("Una Moto");
        coche->setOpcion("Una moto");
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

    ui->VehiculoGuardadoCargarspinBox->setMaximum(n-1);
    //Guardar en la lista
    ui->textEdit->setPlainText(QString::fromStdString(coche->toString()));







}



//MATRICULA
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
    coche->setMatricula(nmatricula);
    ui->MatriculalineEdit->setText(QString::fromStdString(nmatricula));


}

void MainWindow::on_ResetpushButton_clicked()
{

    garaje.clear();
    int x= garaje.size();
   cout<< x << endl;

    ui->HPSlider->setValue(0);
    ui->BocinasspinBox->setValue(0);
    ui->BurbujacheckBox->setChecked(false);
    ui->PortavasoscheckBox->setChecked(false);
    ui->KitRadioButton->setChecked(false);
    ui->RuedaRpuestoradioButton->setChecked(false);
    ui->RuedaRpuestoradioButton->clearFocus();
    ui->textEdit->setText(QString::fromStdString(""));
    ui->lineEdit->setText(QString::fromStdString(""));
    ui->MatriculalineEdit->setText(QString::fromStdString(""));

}

void MainWindow::on_CargarpushButton_clicked()
{

    int n = ui->VehiculoGuardadoCargarspinBox->value();
    vehiculo coche = garaje[n];
    ui->textEdit->setText(QString::fromStdString(coche.toString()));
    ui->lineEdit->setText(QString::fromStdString(coche.getOpcion()));
}


