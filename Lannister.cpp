#include "Lannister.h"
#include <string>

using namespace std;

Lannister::Lannister(){

}

double getDinero(){
	return Dinero;
}

string getFuerzaDeLaMontana(){
	return FuerzaDeLaMontana;
}

int getIntegrantes(){
	return Integrantes;
}

void setDinero(double d){
	Dinero=d;
}

void setFuerzaDeLaMontana(string s){
	string=s;
}

void setIntegrantes(int i){
	Integrantes=i;
}
