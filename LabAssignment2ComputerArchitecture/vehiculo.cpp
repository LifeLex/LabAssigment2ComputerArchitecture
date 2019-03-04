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

//Vector Coches
vector<vehiculo> vehiculo::getCochera()
{
    return garaje;
}

//toString
string vehiculo::toString()
{
    string txt;
    txt.append(Nombre);
    txt.append(Ruedas);
    txt.append(HP);
    txt.append(RuedaRepuesto);
    txt.append(KitReparacion);
    txt.append(Color);
    txt.append(Burbuja);
    txt.append(Portavasos);
    txt.append(NumeroBocinas);
    txt.append(Matricula);

    return txt;
}
