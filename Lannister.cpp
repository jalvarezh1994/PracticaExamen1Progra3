#include "Lannister.h"
#include <string>
#include "Familia.h"
#include <iostream>

using namespace std;

Lannister::Lannister(){

}

Lannister::Lannister(string jefe, string animal, string lema, double dinero, string fuerza, int integrantes, Dothraki ejercito){
	this->Jefe_Familia=jefe;
	this->Animal_Emblema=animal;
	this->Lema=lema;
	Dinero=dinero;
	FuerzaDeLaMontana=fuerza;
	Integrantes=integrantes;
	Ejercito=ejercito;
}

double Lannister::getDinero(){
	return Dinero;
}

string Lannister::getFuerzaDeLaMontana(){
	return FuerzaDeLaMontana;
}

int Lannister::getIntegrantes(){
	return Integrantes;
}

Dothraki Lannister::getDothraki(){
	return Ejercito;
}

void Lannister::setDinero(double d){
	Dinero=d;
}

void Lannister::setFuerzaDeLaMontana(string s){
	FuerzaDeLaMontana=s;
}

void Lannister::setIntegrantes(int i){
	Integrantes=i;
}

void Lannister::setDothraki(Dothraki d){
	Ejercito=d;
}
