#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
    private:
        string sistemaOperativo;
        int tamanoRam;
        string procesador;
        string nombreEquipo;
    public:
        Computadora();
        Computadora(const string &sistemaOperativo,int tamanoRam,const string &procesador,const string &nombreEquipo);

        void setSistemaOperativo(const string &v);
        void setTamanoRam(int v);
        void setProcesador(const string &v);
        void setNombreEquipo(const string &v);

        string getSistemaOperativo();
        int getTamanoRam();
        string getProcesador();
        string getNombreEquipo();

        friend ostream& operator << (ostream &out, const Computadora &c){
            out << left;
            out << setw(16) << c.nombreEquipo;
            out << setw(20) << c.sistemaOperativo;
            out << setw(6) << c.tamanoRam;
            out << setw(16) << c.procesador;
            out << endl;

            return out;
        }
        friend istream& operator >> (istream &in, Computadora &c){
            cout << "Nombre del Equipo: ";
            getline(cin, c.nombreEquipo);
            cout << "Sistema Operativo: ";
            getline(cin, c.sistemaOperativo);
            cout << "Tamano de Ram: ";
            cin >> c.tamanoRam;
            cout << "Microprocesador: ";
            cin.get();
            getline(cin, c.procesador);

            return in;
        }

        bool operator==(const Computadora& c){
            return nombreEquipo == c.nombreEquipo;
        }

        bool operator==(const Computadora& c) const {
            return nombreEquipo == c.nombreEquipo;
        }
};

#endif