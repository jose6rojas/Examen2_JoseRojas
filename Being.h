// Being.h

#include <string>
#include "DevilsFruit.h"

using namespace std;

#ifndef BEING_H
#define BEING_H

class Being
{
	protected:
		string raza;
		int edad;
		string nombre;
		bool hasDF;
		DevilsFruit* DF;
	
	public:
		Being(int, int, string, DevilsFruit*); // raza, edad, nombre, DevilsFruit*
		
		// raza
		void setRaza(int);
		string getRaza();
		// edad
		int getEdad();
		// nombre
		string getNombre();
		// hasDF
		void setHasDF();
		bool getHasDF();
		// DF
		DevilsFruit* getDF();
		
		~Being() { delete DF; }
};

#endif
