#include "Lannister.h"
#include <string>

using namespace std;

Lannister::Lannister(){

}

Lannister::Lannister(string jefe, string animal, string lema, double dinero, string fuerza, int integrantes, Dothraki ejercito){
	Jefe_Familia=jefe;
	Animal_Emblema=animal;
	Lema=lema;
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

void Lannister::setDinero(double d){
	Dinero=d;
}

void Lannister::setFuerzaDeLaMontana(string s){
	FuerzaDeLaMontana=s;
}

void Lannister::setIntegrantes(int i){
	Integrantes=i;
}
