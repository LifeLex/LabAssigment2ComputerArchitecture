#include "vehiculo.h"



using namespace std;
//Constructor
vehiculo::vehiculo()
{


}

//Destructor
vehiculo::~vehiculo()
{

}

//Main Configuration
void vehiculo::setNombre(string Nombre)
{
    this->Nombre= Nombre;
}

void vehiculo::setRuedas(string Ruedas)
{
    this->Ruedas= Ruedas;
}

void vehiculo::setHP(string HP)
{
    this->HP= HP;
}

void vehiculo::setFuel(string Fuel)
{
    this->Fuel= Fuel;
}


void vehiculo::setRuedaRepuesto(string RuedaRepuesto)
{
    this->RuedaRepuesto= RuedaRepuesto;
}

void vehiculo::setKitReparcion(string KitReparacion)
{
    this->KitReparacion= KitReparacion;
}

void vehiculo::setColor(string Color)
{
    this->Color= Color;
}

//Accesorios
void vehiculo::setBurbuja(string Burbuja)
{
    this->Burbuja= Burbuja;
}

void vehiculo::setPortavasos(string Portavasos)
{
    this->Portavasos= Portavasos;
}

void vehiculo::setNumeroBocinas(string NumeroBocinas)
{
    this->NumeroBocinas= NumeroBocinas;
}

//Matricula
void vehiculo::setMatricula(string Matricula)
{
    this->Matricula= Matricula;
}

//Opcion
void vehiculo::setOpcion(string NombreOpcion)
{
    this->NombreOpcion= NombreOpcion;
}

string vehiculo::getOpcion()
{
    return NombreOpcion;
}

//toString
string vehiculo::toString()
{
    string txt;
    txt.append(Nombre);
    txt.append("\n");
    txt.append(Ruedas);
    txt.append("\n");
    txt.append(HP);
    txt.append("\n");
    txt.append(Fuel);
    txt.append("\n");
    txt.append(RuedaRepuesto);
    txt.append("\n");
    txt.append(KitReparacion);
    txt.append("\n");
    txt.append(Color);
    txt.append("\n");
    txt.append(Burbuja);
    txt.append("\n");
    txt.append(Portavasos);
    txt.append("\n");
    txt.append(NumeroBocinas);
    txt.append("\n");
    txt.append(Matricula);


    return txt;
}
