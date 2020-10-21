#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(18) << "Nombre del equipo";
        archivo << setw(18) << "Sistema operativo";
        archivo << setw(8) << "RAM";
        archivo << setw(16) << "Memoria de video";
        archivo << endl;
        for (size_t i = 0; i < cont; i++){
            Computadora &c = vect[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for (size_t i = 0; i < cont; i++){
            Computadora &c = vect[i];
            archivo << c.getNombre()<<endl;;
            archivo << c.getSistema()<<endl;
            archivo << c.getRam()<<endl;
            archivo << c.getMemoriavideo()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int ram;
        int memoria;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setNombre(temp);

            getline(archivo, temp);
            c.setSistema(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            getline(archivo, temp);
            memoria = stoi(temp);
            c.setMemoriavideo(memoria);

            addComputadora(c);
        }

    }
    archivo.close();

}