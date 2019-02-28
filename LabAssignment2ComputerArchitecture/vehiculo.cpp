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

void vehiculo::setRuedas(int Ruedas)
{
    this->Ruedas= Ruedas;
}

void vehiculo::setHP(int HP)
{
    this->HP= HP;
}

void vehiculo::setRuedaRepuesto(bool RuedaRepuesto)
{
    this->RuedaRepuesto= RuedaRepuesto;
}

void vehiculo::setKitReparcion(bool KitReparacion)
{
    this->KitReparacion= KitReparacion;
}

void vehiculo::setColor(string Color)
{
    this->Color= Color;
}

//Accesorios
void vehiculo::setBurbuja(bool Burbuja)
{
    this->Burbuja= Burbuja;
}

void vehiculo::setPortavasos(bool Portavasos)
{
    this->Portavasos= Portavasos;
}

void vehiculo::setNumeroBocinas(int NumeroBocinas)
{
    this->NumeroBocinas= NumeroBocinas;
}

//Matricula
void vehiculo::setMatricula(string Matricula)
{
    this->Matricula= Matricula;
}

//Vector Coches
vector<vehiculo> vehiculo::getCochera()
{
    return garaje;
}
