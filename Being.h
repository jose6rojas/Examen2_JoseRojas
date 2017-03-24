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
		bool hakiObs;
		bool hakiArm;
		bool hakiRey;
	
	public:
		Being(int, int, string, DevilsFruit*, bool, bool, bool); // raza, edad, nombre, DF,
									 // hakiObs, hakiArm, hakiRey
		
		// raza
		void setRaza(int);
		string getRaza();
		// edad
		int getEdad();
		// nombre
		string getNombre();
		// hasDF
		void setHasDF(bool);
		bool getHasDF();
		// DF
		DevilsFruit* getDF();
		// hakis
		void setHakiObs(bool);
		bool getHakiObs();
		void setHakiArm(bool);
		bool getHakiArm();
		void setHakiRey(bool);
		bool getHakiRey();
		
		~Being() { delete DF; }
};

#endif
