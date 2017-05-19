#include "PequenasFamiliasNobles.h"

#include <string>



using namespace std;

PequenasFamiliasNobles::PequenasFamiliasNobles(){

}

PequenasFamiliasNobles::PequenasFamiliasNobles(string Nombre, string SimboloDeEscudo,string Lema,int CantidadDePersonas,double Ataque, double Defensa){
	this->Nombre=Nombre;
	this->SimboloDeEscudo=SimboloDeEscudo;
	this->Lema=Lema;
	this->CantidadDePersonas=CantidadDePersonas;
	this->Ataque=Ataque;
	this->Defensa=Defensa;

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
