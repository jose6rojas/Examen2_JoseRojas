// Examen 2 - Laboratorio de Programacion III
// Jose Rojas - 11541234

#include <iostream>
#include <vector>
#include <string>
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
		}
		else { }
		// else if(op_menu == 3) { }i
	}
	
	for(int i = 0; i < DFs.size(); i++)
		delete DFs[i];
	DFs.clear();
	
	for(int i = 0; i < seres.size(); i++)
		delete seres[i];
	seres.clear();
}

















