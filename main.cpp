#include<string>
#include<iostream>
#include "Familia.h"
#include "Starks.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "PequenasFamiliasNobles.h"
#include "Dothraki.h"
#include "Guardia.h"

using namespace std;


int main(){
	
	Starks starks;
	Lannister lannister;
	Targaryen targaryen;

	char resp ='s';
        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Agregar Familias"<<endl;
                cout <<"2-Agregar Ejercitos"<<endl;
		cout <<"3-Listar Ejercitos"<<endl;
		cout <<"4-Modificar Ejercitos"<<endl;
		cout <<"5-Eliminar Ejercitos"<<endl;
		cout <<"6-Simular Batallas"<<endl;
		
                cin>> option;

                switch (option){
                        case 1:{
                            cout<<"¿Qué familia desea agregar?"<<endl;
			    cout<<"1. Starks"<<endl;
			    cout<<"2. Lannister"<<endl;
			    cout<<"3. Targaryen"<<endl;
			    int opc;
			    cout<<"Ingrese una opción: ";
			    cin>>opc;
			    if(opc=1){
				string jefe;
			    	cout<<"Ingrese Jefe de la familia: ";
				cin>>jefe;
				string animal;
				cout<<"Ingrese animal: ";
				cin>>animal;
				string lema;
				cout<<"Ingrese lema: ";
				cin>>lema;
				int huargos;
				cout<<"Ingrese cantidad de huargos: ";
				cin>>huargos;
				int ejercito;
				cout<<"Ingrese el número donde se encuentra el ejercito: ";
				cin>>ejercito;
				string guerrero;
				cout<<"Ingrese guerrero principal: ";
				cin>>guerrero;
				int integrantes;
				cout"Ingrese la cantidad de integrantes: ";
				cin>>integrantes;
				Starks a(jefe,animal,lema,huargos,nobles[ejercito],guerrero,integrantes);
				starks=a;
			    }
			    if(opc=2){
                                string jefe;
				cout<<"Ingrese Jefe de la familia: ";
				cin>>jefe;
				string animal;
				cout<<"Ingrese animal: ";
				cin>>animal;
				string lema;
				cout<<"Ingrese lema: ";
				cin>lema;
				double dinero;
				cout<<"Ingrese la cantidad de dinero: ";
				cin>>dinero;
				int ejercito;
				cout<<"Ingrese el número donde se encuentra el ejercito: ";
				cin>>ejercito;
				string fuerza;
				cout<<"Ingrese la fuerza de la montana: ";
				cin>>fuerza;
				int integrantes;
				cout"Ingrese la cantidad de integrantes: ";
				cin>>integrantes;
				Lannister a(jefe,animal,lema,dinero,fuerza,integrantes,dothraki[ejercito]);
				lannister=a;
			    }
                        break;
                        }

                        case 2:{
                               
	
			break;
                        }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";

return 0;
}


