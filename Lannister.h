#pragma once
#include <string>
#include "Familia.h"
#include "Dothraki.h"

using namespace std;

class Lannister{
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

		void setDinero(double);
		void setFuerzaDeLaMontana(string);
		void setIntegrantes(int);
};
