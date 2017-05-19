#include "Targaryen.h"
#include <string>
#include "Familia.h"
#include "Guardia.h"

using namespace std;

Targaryen::Targaryen(){
        
}

Targaryen::Targaryen(string jefe,string animal,string lema,int dragones,int barcos, Guardia ejercito){
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

Guardia Targaryen::getEjercito(){
        return Ejercito;
}

int Targaryen::getCant_Barcos(){
        return Cant_Barcos;
}

void Targaryen::setCant_Dragones(int i){
        Cant_Dragones=i;
}

void Targaryen::setEjercito(Guardia p){
        Ejercito=p;
}

void Targaryen::setCant_Barcos(int s){
        Cant_Barcos=s;
}
