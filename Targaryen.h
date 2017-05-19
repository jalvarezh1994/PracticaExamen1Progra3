#include <string>
#include "Familia.h"
#include "Guardia.h"
#ifndef TARGARYEN_H
#define TARGARYEN_H

using namespace std;

class Targaryen: public Familia{
	private:
		int Cant_Dragones;
		int Cant_Barcos;
		Guardia Ejercito;
	public: 
		Targaryen();
		Targaryen(string,string,string,int,int,Guardia);
		int getCant_Dragones();
		void setCant_Dragones(int);
		int getCant_Barcos();
		void setCant_Barcos(int);
		Guardia getEjercito();
		void setEjercito(Guardia);
		
		
};

#endif























