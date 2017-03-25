// Marina.cpp - hija de Being

#include "Marina.h"

Marina::Marina(string raza, int edad, string nombre, DevilsFruit* DF, bool hakiObs, bool hakiArm, bool hakiRey, string fechaIngreso, string rango) : Being(raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey)
{
	this -> fechaIngreso = fechaIngreso;
	// setRango(r);
	this -> rango = rango;
}

/* void Marina::setRango(int r)
{
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
} */
