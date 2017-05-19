#pragma once
#include <string>
#include "PequenasFamiliasNobles.h"
#include "Familia.h"

using namespace std;

class Starks{
	private:
		int CantidadDeHuargos;
		PequenasFamiliasNobles Ejercito;
		string GuerreroMasValioso;
		int CantidadDeIntegrantes;
	public:
		Starks();
		Starks(string,string,string,int,PequenasFamiliasNobles,string,int);
		
		int getCantidadDeHuargos();
		PequenasFamiliasNobles getPequenasFamiliasNobles();
		string getGuerreroMasValioso();
		int getCantidadDeIntegrantes();

		void setCantidadDeHuargos(int);
		void setPequenasFamiliasNobles(PequenasFamiliasNobles);
		void setGuerreroMasValioso(string);
		void setCantidadDeIntegrantes(int);
};
