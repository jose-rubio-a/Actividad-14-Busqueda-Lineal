#include <iostream>
#include "arregloDinamico.h"
#include "computadora.h"
using namespace std;

int main(){
    ArregloDinamico<Computadora> computadoras;
    
    Computadora c01("Windows",8,"AMD","Equipo #1");
    Computadora c02("Linux",16,"Intel","Equipo #2");
    Computadora c03("macOS", 8,"Intel","Equipo #3");
   
    computadoras << c01 << c02 << c01 << c03 << c01;
    
    Computadora c04("Windows",8,"AMD","Equipo #1");
    Computadora c05("Windows",8,"AMD","Equipo 1");
    
    Computadora *ptr = computadoras.buscar(c04);
    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else {
        cout << "No existe ese elemento" << endl;
    }
    
    ptr = computadoras.buscar(c05);
    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else {
        cout << "No existe ese elemento" << endl;
    }

    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c04);
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            cout << *ptrs[i] << endl;
        }
    }
    else{
        cout << "No existio ninguna coincidencia" << endl;
    }

    ptrs = computadoras.buscar_todos(c05);
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            cout << *ptrs[i] << endl;
        }
    }
    else{
        cout << "No existio ninguna coincidencia" << endl;
    }
    return 0;
}