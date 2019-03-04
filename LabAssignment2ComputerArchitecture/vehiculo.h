#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class vehiculo
{
public:
    //Constructor Destructor
    vehiculo();
    ~vehiculo();

    //getters
    //Main Configuration
    string getNombre();
    string getRuedas();
    string getHP();
    string getFuel();
    string getRuedaRepuesto();
    string getKitReparacion();
    string getColor();
    //Accesorios
    string getBurbuja();
    string getPortavasos();
    string getNumeroBocinas();
    //Matricula
    string getMatricula();
    //Vector Coches


    //setters
    //Main Configuration
    void setNombre(string Nombre);
    void setRuedas(string Ruedas);
    void setHP(string HP);
    void setFuel(string Fuel);
    void setRuedaRepuesto(string RuedaRepuesto);
    void setKitReparcion(string KitReparacion);
    void setColor(string Color);

    //Accesorios
    void setBurbuja(string Burbuja);
    void setPortavasos(string Portavasos);
    void setNumeroBocinas(string NumeroBocinas);

    //Matricula
    void setMatricula(string Matricula);



    //toString
    string toString();

private:
    //atributos
    //Main Config
    string Nombre;
    string Ruedas;
    string HP;
    string Fuel;
    string RuedaRepuesto;
    string KitReparacion;
    string Color;

    //Accesorios
    string Burbuja;
    string Portavasos;
    string NumeroBocinas;

    //Matricula
    string Matricula;


};

#endif // VEHICULO_H
