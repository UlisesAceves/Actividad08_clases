 #include <iostream>
#include <cstdlib>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio lb;

    Computadora c01 = Computadora("Alienware", "Windows 10", 16, 8);

    Computadora c02;
    cin >> c02;

    Computadora c03 = Computadora("Omen", "Windows 10 ", 8, 8);

    Computadora c04;
    cin >> c04;

    /*
    c02.setNombre("HP");
    c02.setSistema("Linux");
    c02.setRam(8);
    c02.setMemoriavideo(4);

    c04.setNombre("Thinkpad");
    c04.setSistema("Windows 7");
    c04.setRam(4);
    c04.setMemoriavideo(0);
    */

    /*
    lb.addComputadora(c01);
    lb.addComputadora(c02);
    lb.addComputadora(c03);
    lb.addComputadora(c04);
    */

    lb << c01 << c02 << c03 << c04;

    cout<<"Registros realizados"<<endl;
    lb.mostrar();

    lb.respaldar_tabla();
    lb.respaldar();
    return 0;
}