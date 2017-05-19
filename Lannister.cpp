#include "Lannister.h"
#include <string>

using namespace std;

Lannister::Lannister(){

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
