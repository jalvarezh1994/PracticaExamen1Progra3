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
		PequenasFamiliasNobles(string,string,string,int,double,double);
		string getNombre();
		void setNombre(string);
		string getSimboloDeEscudo();
		void setSimboloDeEscudo(string);
		string getLema();
		void setLema(string);
		int getCantidadDePersonas();
		void setCantidadDePersonas(int);
		double getAtaque();
		void setAtaque(double);
		double getDefensa();
		void setDefensa(double);
};
