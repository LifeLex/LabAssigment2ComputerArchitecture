#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <vector>


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
    int getRuedas();
    int getHP();
    bool getRuedaRepuesto();
    bool getKitReparacion();
    string getColor();
    //Accesorios
    bool getBurbuja();
    bool getPortavasos();
    int getNumeroBocinas();
    //Matricula
    string getMatricula();


    //setters
    //Main Configuration
    void setNombre(string Nombre);
    void setRuedas(int Ruedas);
    void setHP(int HP);
    void setRuedaRepuesto(bool RuedaRepuesto);
    void setKitReparcion(bool KitReparacion);
    void setColor(string Color);

    //Accesorios
    void setBurbuja(bool Burbuja);
    void setPortavasos(bool Portavasos);
    void setNumeroBocinas(int NumeroBocinas);

    //Matricula
    void setMatricula(string Matricula);



private:
    //atributos
    //Main Config
    string Nombre;
    int Ruedas;
    int HP;
    bool RuedaRepuesto;
    bool KitReparacion;
    string Color;

    //Accesorios
    bool Burbuja;
    bool Portavasos;
    int NumeroBocinas;

    //Matricula
    string Matricula;

};

#endif // VEHICULO_H
