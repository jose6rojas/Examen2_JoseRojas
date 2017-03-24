// Pirata.cpp - hija de Being

#include "Pirata.h"

Pirata::Pirata(int r1, int edad, string nombre, DevilsFruit* DF, bool hakiObs, bool hakiArm, bool hakiRey, int o, string tripulacion, string funcion) : Being(r1, edad, nombre, DF, hakiObs, hakiArm, hakiRey)
{
	setOceano(o);
	this -> tripulacion = tripulacion;
	this -> funcion = funcion;
}

void Pirata::setOceano(int o)
{
	if(o == 1)
		oceano = "East";
	else if(o == 2)
		oceano = "West";
	else if(o == 3)
		oceano = "South";
	else if(o == 4)
		oceano = "North Blue";
	else if(o == 5)
		oceano = "Grand Line";
	else if(o == 6)
		oceano = "New World";
	else
		oceano = "North Blue";
}
