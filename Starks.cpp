#include <string>
#include "Starks.h"

using namespace std;

Starks::Starks(){
	
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
