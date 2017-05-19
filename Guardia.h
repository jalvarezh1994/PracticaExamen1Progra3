#pragma once
#include <string>

using namespace std;

class Guardia{
	private:
		string Nombre;
		string Tipo_soldado;
		int edad;
		double Ataque;
		double Defensa;
	public:
		Guardia();
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
