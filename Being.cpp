// Being.cpp

#include "Being.h"

Being::Being(int r, int edad, string nombre, DevilsFruit* DF)
{
	setRaza(r);
	this -> edad = edad;
	this -> nombre = nombre;
	// hasDF = false;
	this -> DF = DF;
}

// raza
void Being::setRaza(int r)
{
	if(r == 1)
		raza = "Gyojin";
	else if(r == 2)
		raza = "Kyojin";
	else if(r == 3)
		raza = "Ningyo";
	else if(r == 4)
		raza = "Humano";
	else if(r == 5)
		raza = "Mink";
	else if(r == 6)
		raza = "Skypieans";
	else
		raza = "Humano";
}
string Being::getRaza() { return raza; }
// edad
int Being::getEdad() { return edad; }
// nombre
string Being::getNombre() { return nombre; }
// hasDF
void Being::setHasDF() { hasDF = true; }
bool Being::getHasDF() { return hasDF; }
// DF
DevilsFruit* Being::getDF() { return DF; }
