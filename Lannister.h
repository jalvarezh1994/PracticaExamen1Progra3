#pragma once
#include <string>
#include "Familia.h"
#include "Dothraki.h"
#include <iostream>
using namespace std;

class Lannister: public Familia{
	private:
		double Dinero;
		string FuerzaDeLaMontana;
		int Integrantes;
		Dothraki Ejercito;
	public:
		Lannister();
		Lannister(string,string,string,double,string,int,Dothraki);

		double getDinero();
		string getFuerzaDeLaMontana();
		int getIntegrantes();
		Dothraki getDothraki();

		void setDinero(double);
		void setFuerzaDeLaMontana(string);
		void setIntegrantes(int);
		void setDothraki(Dothraki);		
};
