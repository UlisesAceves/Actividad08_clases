#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
private:
    Computadora vect[5];
    size_t cont;
public:
    Laboratorio();
    void addComputadora(const Computadora &c);
    void mostrar();
};






#endif