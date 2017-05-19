#include <string>
#include <iostream>
#include "Familia.h"
#include "Starks.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "PequenasFamiliasNobles.h"
#include "Dothraki.h"
#include "Guardia.h"
#include <vector>

using namespace std;


int main(){
	

	Starks starks;
	Lannister lannister;
	Targaryen targaryen;

	char resp ='s';

	vector<PequenasFamiliasNobles> nobles;
	vector<Dothraki> dothraki;
	vector<Guardia> guardia;
	

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
		    if(opc==1){
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
			cout<<"Ingrese la cantidad de integrantes: ";
			cin>>integrantes;
				Starks a(jefe,animal,lema,huargos,nobles[ejercito],guerrero,integrantes);
				starks=a;
			    }
			if(opc==2){
                                string jefe;
				cout<<"Ingrese Jefe de la familia: ";
				cin>>jefe;
				string animal;
				cout<<"Ingrese animal: ";
				cin>>animal;
				string lema;
			cout<<"Ingrese lema: ";
			cin>>lema;
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
				cout<<"Ingrese la cantidad de integrantes: ";
				cin>>integrantes;
				Lannister a(jefe,animal,lema,dinero,fuerza,integrantes,dothraki[ejercito]);
				lannister=a;
			}
                       break;
                       }

	               case 2:{

                               
	
	

	                    	int op;
				cout<<"1-Pequeñas Familias Nobles."<<endl;
				cout<<"2-Dothraki"<<endl;
				cout<<"3-Guardia Real"<<endl;
				cin>>op;
						
				
				switch(op){
					case 1:{
						
						string nombre, simbolo, lema;
						int Cant_p;
						double ataque, defensa;	
						
							
						cout<<"Ingrese nombre del ejercito: "<<endl;						
						cin>>nombre;
						cout<<"Ingrese nombre del simbolo: "<<endl;
						cin>>simbolo;
						cout<<"Ingrese lema: "<<endl;
						cin>>lema;
						cout<<"Ingrese cantidad de personas"<<endl;
						cin>>Cant_p;
						cout<<"Ingrese el ataque"<<endl;
						cin>>ataque;
						cout<<"Ingrese la defensa"<<endl;
						cin>>defensa;
						
						PequenasFamiliasNobles a(nombre,simbolo,lema,Cant_p,ataque,defensa);
						nobles.push_back(a);						
									
					break;
					}
					
					case 2:{
						
						string nombre, barbaro, nombre_caballo,color_cabello;
                                                double ataque, defensa;

                                                cout<<"Ingrese nombre del ejercito: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese nombre del Jefe Barbaro: "<<endl;
                                                cin>>barbaro;
                                                cout<<"Ingrese nombre del caballo: "<<endl;
                                                cin>>nombre_caballo;
                                                cout<<"Ingrese color de cabello"<<endl;
                                                cin>>color_cabello;
                                                cout<<"Ingrese el ataque"<<endl;
                                                cin>>ataque;
                                                cout<<"Ingrese la defensa"<<endl;
                                                cin>>defensa;

                                                Dothraki a(nombre,barbaro,nombre_caballo,color_cabello,ataque,defensa);
                                                dothraki.push_back(a);
		
						
						
					break;
					}
					
					case 3:{
						
						string nombre, tipo_s;
						int edad;
                                                double ataque, defensa;

                                                cout<<"Ingrese nombre del ejercito: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese edad: "<<endl;
                                                cin>>edad;
                                                cout<<"Ingrese tipo de soldado: "<<endl;
                                                cin>>tipo_s;
                                                cout<<"Ingrese el ataque"<<endl;
                                                cin>>ataque;
                                                cout<<"Ingrese la defensa"<<endl;
                                                cin>>defensa;

                                                Guardia a(nombre,tipo_s,edad,ataque,defensa);
                                                guardia.push_back(a);

						
					break;
					}


					
			
				}
				
				
				
	 		 break;

                          }

			  case 3:{

				//listar ejercito

				int o;
				cout<<"1.Nobles"<<endl;
				cout<<"2.Dothraki"<<endl;
				cout<<"3.Guardia"<<endl;
				cin>>o;
				
				switch (o){
					case 1:{
						for(int i=0;i<=nobles.size();i++){
							cout<< nobles[i].getNombre()<<endl;
						}
					break;
					}

					case 2:{
						for(int i=0;i<=dothraki.size();i++){
							cout<<i<<"-"<<dothraki[i].getNombre()<<endl;
                                                }
					break;
					}

					case 3:{
						
						for(int i=0;i<=guardia.size();i++){
                                                        cout<< guardia[i].getNombre()<<endl;
                                                }

					break;
					}

				}
				
				break;
			  }
				
			  case 4:{
				//modificar
				

			}


			case 5:{
				//Eliminar
	
				int w;
                                cout<<"1.Nobles"<<endl;
                                cout<<"2.Dothraki"<<endl;
                                cout<<"3.Guardia"<<endl;
                                cin>>w;

                                switch (w){
					
				        case 1:{
					int n;
					cout<< "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;
					cin>>n;	
					

					nobles.erase(nobles.begin()+n);

					break;
					}


					case 2:{
					int n;
                                        cout<< "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;                                          cin>>n;


                                        dothraki.erase(dothraki.begin()+n);

					break;
					}
					
					case 3:{
					int n;
                                        cout<< "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;                                          cin>>n;

                                        guardia.erase(guardia.begin()+n);					
										
					break;
					}
					
				}
			}
			
			
			case 6:{
				//Simulacion
				Familia f1,f2;
				int fa1,fa2;
				cout<<"Seleccione las familias"<<endl;	
  				cout<<"1. Starks"<<endl;
				cout<<"2. Lannister"<<endl;
				cout<<"3. Targaryen"<<endl;
				cout<<"Ingrese la familia 1: ";
				cin>>fa1;
				cout<<"Ingrese la familia 2: ";
				cin>>fa2;
				cout<<endl;
				if(fa1==1&&fa2==2){
					do{
						int h;
						cout<<"Defensa Starks "<<starks.getPequenasFamiliasNobles().getDefensa()<<endl; 	                                 		       cout<<"Defensa Lannister"<<lannister.getDothraki().getDefensa()<<endl;
						cout<<"Turno juador 1"<<endl;
						double dano=starks.getPequenasFamiliasNobles().getAtaque();
						lannister.getDothraki().setDefensa(lannister.getDothraki().getDefensa()-dano);
						if(lannister.getDothraki().getDefensa()<=0){
							break;
						}
						cout<<"Defensa Starks "<<starks.getPequenasFamiliasNobles().getDefensa()<<endl;
						cout<<"Defensa Lannister"<<lannister.getDothraki().getDefensa()<<endl;
						cin>>h;
						double dano1=lannister.getDothraki().getAtaque();
						starks.getPequenasFamiliasNobles().setDefensa(starks.getPequenasFamiliasNobles().getDefensa()-dano1);
					}while(starks.getPequenasFamiliasNobles().getDefensa()>0||lannister.getDothraki().getDefensa()>0);
					if(starks.getPequenasFamiliasNobles().getDefensa()>0){
						cout<<"Ganó Starks"<<endl;
					}else{
						cout<<"Ganó Lannister"<<endl;
					}
				}
				if(fa1==1&&fa2==3){
					do{
						int h;
						cout<<"Defensa Starks "<<starks.getPequenasFamiliasNobles().getDefensa()<<endl;                                                                cout<<"Defensa Targaryen"<<targaryen.getEjercito().getDefensa()<<endl;
						cout<<"Turno juador 1"<<endl;
						double dano=starks.getPequenasFamiliasNobles().getAtaque();
						targaryen.getEjercito().setDefensa(targaryen.getEjercito().getDefensa()-dano); 		                                                       if(targaryen.getEjercito().getDefensa()<=0){
							break;
						}
						cout<<"Defensa Starks "<<starks.getPequenasFamiliasNobles().getDefensa()<<endl;
						cout<<"Defensa Lannister"<<lannister.getDothraki().getDefensa()<<endl;			                                                       cin>>h;											                                                      double dano1=targaryen.getEjercito().getAtaque();						                                                     starks.getPequenasFamiliasNobles().setDefensa(starks.getPequenasFamiliasNobles().getDefensa()-dano1);
					}while(starks.getPequenasFamiliasNobles().getDefensa()>0||targaryen.getEjercito().getDefensa()>0);
					if(starks.getPequenasFamiliasNobles().getDefensa()>0){
						cout<<"Ganó Starks"<<endl;
					}else{
						cout<<"Ganó Targaryen"<<endl;
					}

				}
				if(fa1==2&&fa2==3){
				}
			}

	

                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }
	cout<<starks.getPequenasFamiliasNobles().getNombre()<<endl;
        cout<<"Bye";

	return 0;
}
