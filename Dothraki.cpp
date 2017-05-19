#include "Dothraki.h"
#include <string>

Dothraki::Dothraki(){

}

Dothraki::Dothraki(string Nombre, string JefeBarbaro, string NombreDelCaballo, string ColorDeCabello, double Ataque, double Defensa){
	
	this->Nombre=Nombre;
	this->JefeBarbaro=JefeBarbaro;
	this->NombreDelCaballo=NombreDelCaballo;
	this->ColorDeCabello=ColorDeCabello;
	this->Ataque=Ataque;
	this->Defensa=Defensa;

}

string Dothraki::getNombre(){
	return Nombre;
}

string Dothraki::getJefeBarbaro(){
	return JefeBarbaro;
}

string Dothraki::getNombreDelCaballo(){
	return NombreDelCaballo;
}

string Dothraki::getColorDeCabello(){
	return ColorDeCabello;
}

void Dothraki::setNombre(string s){
	Nombre=s;
}

void Dothraki::setJefeBarbaro(string s){
	JefeBarbaro=s;
}

void Dothraki::setNombreDelCaballo(string s){
	NombreDelCaballo=s;
}

void Dothraki::setColorDeCabello(string s){
	ColorDeCabello=s;
}

void Dothraki::setAtaque(double d){
	Ataque=d;
}

void Dothraki::setDefensa(double d){
	Defensa=d;
}
