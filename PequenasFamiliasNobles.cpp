#include "PequenasFamiliasNobles.h"
#include <string>
using namespace std;

PequenasFamiliasNobles::PequenasFamiliasNobles(){

}

string PequenasFamiliasNobles::getNombre(){
	return this->Nombre;
}

void PequenasFamiliasNobles::setNombre(string nombre){
	Nombre=nombre;
}

string PequenasFamiliasNobles::getSimboloDeEscudo(){
	return SimboloDeEscudo;
}

void PequenasFamiliasNobles::setSimboloDeEscudo(string s){
	this->SimboloDeEscudo=s;
}

string PequenasFamiliasNobles::getLema(){
	return Lema;
}

void PequenasFamiliasNobles::setLema(string s){
	this->Lema=s;
}

int PequenasFamiliasNobles::getCantidadDePersonas(){
	return CantidadDePersonas;
}

void PequenasFamiliasNobles::setCantidadDePersonas(int i){
	CantidadDePersonas=i;
}

double PequenasFamiliasNobles::getAtaque(){
	return Ataque;
}

void PequenasFamiliasNobles::setAtaque(double d){
	Ataque=d;
}

double PequenasFamiliasNobles::getDefensa(){
	return Defensa;
}

void PequenasFamiliasNobles::setDefensa(double d){
	Defensa=d;
}
