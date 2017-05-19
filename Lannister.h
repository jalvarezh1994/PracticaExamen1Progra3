#pragma once
#include <string>

using namespace std;

class Lannister{
	private:
		double Dinero;
		string FuerzaDeLaMontana;
		int Integrantes;
	public:
		Lannister();

		double getDinero();
		string getFuerzaDeLaMontana();
		int getIntegrantes();

		void setDinero(double);
		void setFuerzaDeLaMontana(string);
		void setIntegrantes(int);
};
