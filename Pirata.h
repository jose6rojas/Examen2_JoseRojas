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
		Pirata(int, int, string, DevilsFruit*, bool, bool, bool, int, string, string);
		// raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey, oceano, tripulacion, funcion
		
		void setOceano(int);
};
