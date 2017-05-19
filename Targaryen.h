#include <string>
#include "Familia.h"
#include "Dothraki.h"
#ifndef TARGARYEN_H
#define TARGARYEN_H

using namespace std;

class Targaryen: public Familia{
	private:
		int Cant_Dragones;
		int Cant_Barcos;
		Dothraki Ejercito;
	public: 
		Targaryen();
		Targaryen(string,string,string,int,int,Dothraki);
		int getCant_Dragones();
		void setCant_Dragones(int);
		int getCant_Barcos();
		void setCant_Barcos(int);
		Dothraki getEjercito();
		void setEjercito(Dothraki);
		
		
};

#endif























