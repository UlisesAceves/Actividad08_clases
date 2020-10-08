#include "computadora.h"

Computadora::Computadora(){

}

Computadora::Computadora(const string &nombre, const string &sistema, int ram, int memoria){
    this->nombre_equipo=nombre;
    this->sistema_operativo=sistema;
    this->ram=ram;
    this->memoria_video=memoria;
}