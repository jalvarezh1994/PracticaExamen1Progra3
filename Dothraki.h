#pragma once
#include <string>

using namespace std;

class Dothraki{
	private:
		string Nombre;
		string JefeBarbaro;
		string NombreDelCaballo;
		string ColorDeCabello;
		double Ataque;
		double Defensa;
	public:
		Dothraki();
		Dothraki(string,string,string,string,double,double);
		
		string getNombre();
		string getJefeBarbaro();
		string getNombreDelCaballo();
		string getColorDeCabello();
		double getAtaque();
		double getDefensa();

		void setNombre(string);
		void setJefeBarbaro(string);
		void setNombreDelCaballo(string);
		void setColorDeCabello(string);
		void setAtaque(double);
		void setDefensa(double);
};
