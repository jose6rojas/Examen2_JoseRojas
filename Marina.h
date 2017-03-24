// Marina.h - hija de Being

#include "Being.h"

#pragma once

class Marina : public Being
{
	private:
		string fechaIngreso;
		string rango;
	
	public:
		Marina(int, int, string, DevilsFruit*, bool, bool, bool, string, int); // raza, edad, nombre, DF,
										       // hakiObs, hakiArm, hakiRey,
										       // fechaIngreso, rango
		
		string getFechaIngreso() { return fechaIngreso; }
		void setRango(int);
		string getRango() { return rango; }
};
