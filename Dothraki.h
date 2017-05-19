#pragma once
#include <string>

using namespace std;

class Dothraki{
	public:
		string Nombre;
		string JefeBarbaro;
		string NombreDelCaballo;
		string ColorDeCabello;
		double Ataque;
		double Defensa;
	private:
		Dothraki();

		string getNombre();
		string getJefeBarbaro();
		string getNombreDelCaballo();
		strint getColorDeCabello();
		double getAtaque();
		double getDefensa();

		void setNombre(string);
		void setJefeBarbaro(string);
		void setNombreDelCaballo(string);
		void setColorDeCabello(string);
		void setAtaque(double);
		void setDefensa(double);
};
