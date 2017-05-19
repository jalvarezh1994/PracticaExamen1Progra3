#include<string>
#include<iostream>
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
	
	vector <PequenasFamiliasNobles> nobles;
	vector <Dothraki> dothraki;
	vector <Guardia> guardia;
	
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
                            





                        break;
                        }

                        case 2:{
				//agregar ejercitos
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

                                                Dothraki a(nombre,arbaro,nombre_caballo,color_cabello,ataque,defensa);
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

                                                Guardia a(nombre,edad,tipo_s,ataque,defensa);
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
                                cin>>o;

                                switch (w){
					
				        case 1:{
					int n;
					cout "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;
					cin>>n;	
					
					nobles[n].erase();
					
					break;
					}

					case 2:{
					int n;
                                        cout "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;                                            cin>>n;

                                        dothraki[n].erase();
					

					break;
					}
					
					case 3:{
					int n;
                                        cout "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;                                            cin>>n;

                                        guardia[n].erase();


										
					break;
					}
					
				}
			}
			
			
			case 6:{
				//Simulacion

			}

	
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";

return 0;
}
