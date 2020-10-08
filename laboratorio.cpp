#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont=0;
}

void Laboratorio::addComputadora(const Computadora &c){
    if(cont<5){
        vect[cont]=c;
        cont ++;
    }
    else{
        cout<<"El arreglo esta lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    for (size_t i = 0; i < cont; i++){
        Computadora &c = vect[i];
        cout<<"Nombre del equipo: "<<c.getNombre()<<endl;
        cout<<"Sistema operativo: "<<c.getSistema()<<endl;
        cout<<"RAM: "<<c.getRam()<<endl;
        cout<<"Memoria de video dedicada: "<<c.getMemoriavideo()<<endl;
        cout<<endl;
    }
    
}