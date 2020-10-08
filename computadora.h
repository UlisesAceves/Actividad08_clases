#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
private:
    string nombre_equipo;
    string sistema_operativo;
    int ram;
    int memoria_video;
public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, int ram, int memoria);
    void setNombre(const string &n);
    string getNombre();
    void setSistema(const string &s);
    string getSistema();
    void setRam(int r);
    int getRam();
    void setMemoriavideo(int m);
    int getMemoriavideo();
};


#endif