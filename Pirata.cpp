// Pirata.cpp - hija de Being

#include "Pirata.h"

Pirata::Pirata(string raza, int edad, string nombre, DevilsFruit* DF, bool hakiObs, bool hakiArm, bool hakiRey, string oceano, string tripulacion, string funcion) : Being(raza, edad, nombre, DF, hakiObs, hakiArm, hakiRey)
{
	// setOceano(o);
	this -> oceano = oceano;
	this -> tripulacion = tripulacion;
	this -> funcion = funcion;
}

/* void Pirata::setOceano(int o)
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
} */
