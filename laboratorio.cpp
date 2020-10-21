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
    cout << left;
    cout << setw(18) << "Nombre del equipo";
    cout << setw(18) << "Sistema operativo";
    cout << setw(8) << "RAM";
    cout << setw(16) << "Memoria de video";
    cout << endl;
    for (size_t i = 0; i < cont; i++){
        Computadora &c = vect[i];
        cout << c;
        /*cout<<"Nombre del equipo: "<<c.getNombre()<<endl;
        cout<<"Sistema operativo: "<<c.getSistema()<<endl;
        cout<<"RAM: "<<c.getRam()<<endl;
        cout<<"Memoria de video dedicada: "<<c.getMemoriavideo()<<endl;
        cout<<endl;*/
    }

}