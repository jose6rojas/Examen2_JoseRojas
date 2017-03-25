// Pirata.h - hija de Being

#include "Being.h"

#pragma once

class Pirata : public Being
{
	private:
		string oceano;
		string tripulacion;
		string funcion;
	
	public:
		Pirata(string, int, string, DevilsFruit*, bool, bool, bool, string, string, string);
		// raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey, oceano, tripulacion, funcion
		
		// void setOceano(int);
		string getOceano() { return oceano; }
		string getTripulacion() { return tripulacion; }
		string getFuncion() { return funcion; }
};
