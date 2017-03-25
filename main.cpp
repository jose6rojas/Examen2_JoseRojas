// Examen 2 - Laboratorio de Programacion III
// Jose Rojas - 11541234

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "DevilsFruit.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"
#include "Being.h"
#include "Marina.h"
#include "Pirata.h"
#include "Revolucionario.h"

using namespace std;

int main()
{
	cout << "Examen 2 - Jose Rojas - 11541234" << endl;
	
	vector<DevilsFruit*> DFs;
	vector<Being*> seres;
	
	int op_menu = 0;
	while(op_menu != 3)
	{
		cout << "\n1. Agregar Frutas del Diablo" << endl;
		cout << "2. Agregar Seres" << endl;
		cout << "3. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> op_menu;
		
		if(op_menu == 1) // Agregar Frutas del Diablo
		{
			string nombre;
			cout << "\nIngrese el nombre: ";
			cin >> nombre;
			
			int op_fruta;
			cout << "Fruta del Diablo - Tipo" << endl;
			cout << "1. Paramecia" << endl;
			cout << "2. Zoan" << endl;
			cout << "3. Logia" << endl;
			cout << "¿Que tipo de Fruta del Diablo desea agregar?: ";
			cin >> op_fruta;
			
			if(op_fruta == 1) // Paramecia
			{
				string descripcion;
				cout << "Ingrese la descripcion: ";
				cin >> descripcion;
				
				Paramecia* P = new Paramecia(nombre, descripcion);
				DFs.push_back(P);
				cout << "\nFruta del Diablo Paramecia agregada correctamente" << endl;
			}
			else if(op_fruta == 2) // Zoan
			{
				int t; // op_tipo
				cout << "Zoan - Tipo" << endl;
				cout << "1. Normal" << endl;
				cout << "2. Pre-historica" << endl;
				cout << "3. Legendaria" << endl;
				cout << "Escoja el tipo: ";
				cin >> t;
				
				string tipo;
				if(t == 1)
                			tipo = "Normal";
        			else if(t == 2)
                			tipo = "Pre-historica";
        			else if(t == 3)
                			tipo = "Legendaria";
        			else
                			tipo = "Normal";
				
				Zoan* Z = new Zoan(nombre, tipo);
				DFs.push_back(Z);
				cout << "\nFruta del Diablo Zoan agregada correctamente" << endl;
			}
			else if(op_fruta == 3) // Logia
			{
				string elemento;
				cout << "Ingrese el elemento que representa: ";
				cin >> elemento;
				
				Logia* L = new Logia(nombre, elemento);
				DFs.push_back(L);
				cout << "\nFruta del Diablo Logia agregada correctamente" << endl;
			}
			else
				cout << "\nDebe escoger una opcion valida." << endl;
		}
		else if(op_menu == 2) // Agregar Seres
		{
			// raza
			string raza;
			int op_raza;
			cout << "\nSeres - Raza" << endl;
			cout << "1. Gyojin\n2. Kyojin\n3. Ningyo\n4. Humano\n5. Mink\n6. Skypieans" << endl;
			cout << "Escoja una opcion: ";
			cin >> op_raza;
			if(op_raza == 1)
				raza = "Gyojin";
			else if(op_raza == 2)
				raza = "Kyojin";
			else if(op_raza == 3)
				raza = "Ningyo";
			else if(op_raza == 4)
				raza = "Humano";
			else if(op_raza == 5)
				raza = "Mink";
			else if(op_raza == 6)
				raza = "Skypieans";
			else
				raza = "Humano";
			
			// edad
			int edad;
			cout << "Ingrese la edad: ";
			cin >> edad;
			
			// nombre
			string nombre;
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			
			// hasDF
			bool hasDF;
			int op_hasDF;
			cout << "Seres - tiene Fruta del Diablo" << endl;
			cout << "1. Si\n2. No\n¿Tiene Fruta del Diablo?: ";
			cin >> op_hasDF;
			if(op_hasDF == 1)
				hasDF = true;
			else if(op_hasDF == 2)
				hasDF = false;
			else
			{
				cout << "\nDebe escoger una opcion valida." << endl;
				break;
			}
			
			// Fruta del Diablo
			DevilsFruit* DF;
			if(hasDF)
			{
				if(DFs.size() != 0)
				{
					int op_DF;
					cout << "Frutas del Diablo" << endl;
					for(int i = 0; i < DFs.size(); i++)
						cout << i << ". " << DFs[i] -> getNombre() << endl;
					cout << "Escoja una opcion: ";
					cin >> op_DF;
					if(op_DF >= 0 && op_DF <= DFs.size() - 1)
					{
						/* if()
						{
						}
						else if()
						{
						}
						else
						{
						} */
						
						DF = DFs[op_DF];
					}
					else
					{
						cout << "\nDebe escoger una opcion valida." << endl;
						DF = NULL;
					}
				}
				else
				{
					cout << "\nNo hay Frutas del Diablo." << endl;
					DF = NULL;
				}
			}
			else
				DF = NULL;
			
			// hakiObs
			bool hakiObs;
                        int op_hakiObs;
                        cout << "Seres - hakiObs" << endl;
                        cout << "1. Si\n2. No\n¿Tiene haki de observacion?: ";
                        cin >> op_hakiObs;
                        if(op_hakiObs == 1)
                                hakiObs = true;
                        else if(op_hakiObs == 2)
                                hakiObs = false;
                        else
                        {
                                cout << "\nDebe escoger una opcion valida." << endl;
                                break;
                        }
			
			// hakiArm
                        bool hakiArm;
                        int op_hakiArm;
                        cout << "Seres - hakiArm" << endl;
                        cout << "1. Si\n2. No\n¿Tiene haki de armadura?: ";
                        cin >> op_hakiArm;
                        if(op_hakiArm == 1)
                                hakiArm = true;
                        else if(op_hakiArm == 2)
                                hakiArm = false;
                        else
                        {
                                cout << "\nDebe escoger una opcion valida." << endl;
                                break;
                        }
			
			// hakiRey
                        bool hakiRey;
                        int op_hakiRey;
                        cout << "Seres - hakiRey" << endl;
                        cout << "1. Si\n2. No\n¿Tiene haki de rey?: ";
                        cin >> op_hakiRey;
                        if(op_hakiRey == 1)
                                hakiRey = true;
                        else if(op_hakiRey == 2)
                                hakiRey = false;
                        else
                        {
                                cout << "\nDebe escoger una opcion valida." << endl;
                                break;
                        }
			
			// seres
			int op_ser;
			cout << "Seres - Tipo" << endl;
			cout << "1. Marina" << endl;
			cout << "2. Pirata" << endl;
			cout << "3. Revolucionario" << endl;
			cout << "¿De que tipo de bando es el ser que desea agregar?: ";
			cin >> op_ser;
			if(op_ser == 1) // Marina
			{
				string fechaIngreso;
				cout << "Ingrese la fecha de ingreso [MM/dd/YY]: ";
				cin >> fechaIngreso;
				
				string rango;
				int r;
				if(r == 1)
					rango = "Cadete";
				else if(r == 2)
					rango = "Teniente";
				else if(r == 3)
					rango = "Vice-Almirante";
				else if(r == 4)
					rango = "Almirante";
				else if(r == 5)
					rango = "Almirante de Flota";
				else
					rango = "Cadete";
				
				Marina* M = new Marina(raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey, fechaIngreso, rango);
				M -> setHasDF(hasDF);
				seres.push_back(M);
				
				/* stringstream ss;
				ss << M -> getNombre() << ".log";
				string texto = ss.str();
				ofstream archivo(texto, std::ios_base::app);
				if(archivo.is_open())
				{
					archivo << "Raza: " << M -> getRaza() << endl;
					archivo << "Edad: " << M -> getEdad() << endl;
					archivo << "Nombre: " << M -> getNombre() << endl;
					archivo << "Fruta del Diablo: " << M -> getDF() -> getNombre() << endl;
					archivo << "Haki Obs.: " << M -> getHakiObs() << endl;
					archivo << "Haki Arm.: " << M -> getHakiArm() << endl;
					archivo << "Haki Rey: " << M -> getHakiRey() << endl;
					archivo << "Fecha Ingreso: " << M -> getFechaIngreso() << endl;
					archivo << "Rango: " << M -> getRango();
					// cout << "La informacion fue escrita correctamente.\n" << endl;
					archivo.close();
				}
				else
					cout << "No se pudo abrir el archivo." << endl; */
				
				cout << "\nMarina agregada correctamente" << endl;
			}
			else if(op_ser == 2) // Pirata
			{
			}
			else if(op_ser == 3) // Revolucionario
			{
			}
			else
				cout << "\nDebe escoger una opcion valida." << endl;
		}
		else { }
		// else if(op_menu == 3) { }i
	}
	
	/* for(int i = 0; i < DFs.size(); i++)
		delete DFs[i];
	DFs.clear(); */
	
	for(int i = 0; i < seres.size(); i++)
		delete seres[i];
	seres.clear();
}
