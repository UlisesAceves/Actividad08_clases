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
    void respaldar_tabla();
    void respaldar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.addComputadora(c);

        return l;
    }
};






#endif