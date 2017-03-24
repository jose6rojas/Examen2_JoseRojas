// Revolucionario.h - hijo de Being

#include "Being.h"

#pragma once

class Revolucionario : public Being
{
	private:
		string fechaIngreso;
	
	public:
		Revolucionario(int, int, string, DevilsFruit*, bool, bool, bool, string);
		// raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey, fechaIngreso
		
		string getFechaIngreso();
};
