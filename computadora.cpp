#include "computadora.h"

Computadora::Computadora(){}

Computadora::Computadora(const string &sistemaOperativo,int tamanoRam,const string &procesador,const string &nombreEquipo){
    this->sistemaOperativo = sistemaOperativo;
    this->tamanoRam = tamanoRam;
    this->procesador = procesador;
    this->nombreEquipo = nombreEquipo;
}

void Computadora::setSistemaOperativo(const string &v){
    sistemaOperativo = v;
}
void Computadora::setTamanoRam(int v){
    tamanoRam = v;
}
void Computadora::setProcesador(const string &v){
    procesador = v;
}
void Computadora::setNombreEquipo(const string &v){
    nombreEquipo = v;
}

string Computadora::getSistemaOperativo(){
    return sistemaOperativo;
}
int Computadora::getTamanoRam(){
    return tamanoRam;
}
string Computadora::getProcesador(){
    return procesador;
}
string Computadora::getNombreEquipo(){
    return nombreEquipo;
}