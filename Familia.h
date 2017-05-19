#include <string>
#include <iostream>

#pragma once

using namespace std;

class Familia{
	public:
		string Jefe_Familia;
		string Animal_Emblema;
		string Lema;
	public:
		Familia();
		string getJefe_Familia();
		void setJefe_Familia(string);
		string getAnimal_Emblema();
		void setAnimal_Emblema(string);
		string getLema();
		void setLema(string);	
};
