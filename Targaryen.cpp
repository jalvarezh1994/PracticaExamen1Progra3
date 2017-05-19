#include "Targaryen.h"
#include <string>
#include "Familia.h"
using namespace std;

Targaryen::Targaryen(){
        
}

Targaryen::Targaryen(string jefe,string animal,string lema,int dragones,int barcos,Dothraki ejercito){
	Jefe_Familia=jefe;
	Animal_Emblema=animal;
	Lema=lema;
	Cant_Dragones=dragones;
	Cant_Barcos=barcos;
	Ejercito=ejercito;	
}

int Targaryen::getCant_Dragones(){
        return Cant_Dragones;
}

Dothraki Targaryen::getEjercito(){
        return Ejercito;
}

int Targaryen::getCant_Barcos(){
        return Cant_Barcos;
}

void Targaryen::setCant_Dragones(int i){
        Cant_Dragones=i;
}

void Targaryen::setEjercito(Dothraki p){
        Ejercito=p;
}

void Targaryen::setCant_Barcos(int s){
        Cant_Barcos=s;
}
