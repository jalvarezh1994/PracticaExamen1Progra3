#pragma once
#include <string>

using namespace std;

class Guardia{
	private:
		string Nombre;
		string Tipo_soldado;
		int Edad;
		double Ataque;
		double Defensa;
	public:
		Guardia();
		Guardia(string,string,int,double,double);
		string getNombre();
		void setNombre(string);
		string getTipo_soldado();
		void setTipo_soldado(string);
		double getAtaque();
		void setAtaque(double);
		double getDefensa();
		void setDefensa(double);
		int getEdad();
                void setEdad(int);	
		

};
