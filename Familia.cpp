#include "Familia.h"
#include <string>
using namespace std;

Familia()::Familia(){

}

string Familia::getJefe_Familia(){
        return Jefe_Familia;
}

void Familia::setJefe_Familia(string pJefe){
        this->Jefe_Familia=pJefe;
}

string Familia::getAnimal_Emblema(){
        return Animal_Emblema;
}

void Familia::setAnimal_Emblema(string pAnimal){
        this->Animal_Emblema=pAnimal;
}

string Familia::getLema(){
        return Lema;
}

void Familia::setLema(string pLema){
        this->Lema=pLema;
}

