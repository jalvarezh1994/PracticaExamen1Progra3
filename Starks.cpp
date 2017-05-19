#include <string>
#include "Starks.h"

using namespace std;

Starks::Starks(){
	
}

Starks::Starks(string jefe,string animal,string lema,int huargos,PequenasFamiliasNobles familiasNobles,string guerrero,int integrantes){
	Jefe_Familia=jefe;
	Animal_Emblema=animal;
	Lema=lema;
	CantidadDeHuargos=huargos;
	Ejercito=familiasNobles;
	GuerreroMasValioso=guerrero;
	CantidadDeIntegrantes=integrantes;
}

int Starks::getCantidadDeHuargos(){
	return CantidadDeHuargos;
}

PequenasFamiliasNobles Starks::getPequenasFamiliasNobles(){
	return Ejercito;
}

string Starks::getGuerreroMasValioso(){
	return GuerreroMasValioso;
}

int Starks::getCantidadDeIntegrantes(){
	return CantidadDeIntegrantes;
}

void Starks::setCantidadDeHuargos(int i){
	CantidadDeHuargos=i;
}

void Starks::setPequenasFamiliasNobles(PequenasFamiliasNobles p){
	Ejercito=p;
}

void Starks::setGuerreroMasValioso(string s){
	GuerreroMasValioso=s;
}

void Starks::setCantidadDeIntegrantes(int i){
	CantidadDeIntegrantes=i;
}
