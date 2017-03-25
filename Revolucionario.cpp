// Revolucionario.cpp - hijo de Being

#include "Revolucionario.h"

Revolucionario::Revolucionario(string raza, int edad, string nombre, DevilsFruit* DF, bool hakiObs, bool hakiArm, bool hakiRey, string fechaIngreso) : Being(raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey)
{
	this -> fechaIngreso = fechaIngreso;
}

string Revolucionario::getFechaIngreso() { return fechaIngreso; }
