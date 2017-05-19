#pragma once
#include <string>

using namespace std;

class PequenasFamiliasNobles{
	private:
		string Nombre;
		string SimboloDeEscudo;
		string Lema;
		int CantidadDePersonas;
		double Ataque;
		double Defensa;
	public:
		PequenasFamiliasNobles();
		string getNombre();
		void setNombre(string);
		string getSimboloDeEscudo();
		void setSimboloDeEscudo(string);
		string getLema();
		void setLema(string);
		int getCantidadDePersonas();
		void setCantidadDePErsonas(int);
		double getAtaque();
		void setAtaque(double);
		double getDefensa();
		void setDefensa(double);
};
