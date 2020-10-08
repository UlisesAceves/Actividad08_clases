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
};


#endif