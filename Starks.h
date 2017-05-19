//TODO
#pragma once
#include <string>
#include "Familia.h"

using namespace std;

class Stark{
	private:
		int CantidadDeHuargos;
		PequenasFamiliasNobles Ejercito;
		string GuerreroMasValioso;
		int CantidadDeIntegrantes;
	public:
		Starks();
		
		int getCantidadDeHuargos();
		PequenasFamiliasNobles getPequenasFamiliasNobles();
		string getGuerreroMasValioso();
		int getCantidadDeIntegrantes();

		void setCantidadDeHuargos(int);
		void setPequenasFamiliasNobles(PequenasFamiliasNobles);
		void setGuerreroMasValioso(string);
		void setCantidadDeIntegrantes(int);
};
