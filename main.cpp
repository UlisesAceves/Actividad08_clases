#include <iostream>
#include <cstdlib>
#include "computadora.h"

using namespace std;

int main(){

    Computadora c01 = Computadora("Alienware", "Windows 10", 16, 8);

    Computadora c02;

    c02.setNombre("HP");
    c02.setSistema("Linux");
    c02.setRam(8);
    c02.setMemoriavideo(4);

    cout<<c01.getNombre()<<endl;
    cout<<c02.getNombre()<<endl;

    return 0;
}