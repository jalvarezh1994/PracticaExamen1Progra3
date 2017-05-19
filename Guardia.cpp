#include "Guardia.h"
#include <string>
using namespace std;

Guardia::Guardia(){

}

string Guardia::getNombre(){
        return Nombre;
}

void Guardia::setNombre(string nombre){
        this->Nombre=nombre;
}

string Guardia::getTipo_soldado(){
        return Tipo_soldado;
}

void Guardia::setTipo_soldado(string T_soldado){
        this->Tipo_soldado=T_soldado;
}

int Guardia::getEdad(){
        return Edad;
}

void Guardia::setEdad(int pEdad){
        this->Edad=pEdad;
}

double Guardia::getAtaque(){
        return Ataque;
}

void Guardia::setAtaque(double ataque){
        Ataque=ataque;
}

double Guardia::getDefensa(){
        return Defensa;
}

void Guardia::setDefensa(double d){
        Defensa=d;
}
