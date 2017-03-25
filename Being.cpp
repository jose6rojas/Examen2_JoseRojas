// Being.cpp

#include "Being.h"

Being::Being(string raza, int edad, string nombre, DevilsFruit* DF, bool hakiObs, bool hakiArm, bool hakiRey)
{
	// setRaza(r);
	this -> raza = raza;
	this -> edad = edad;
	this -> nombre = nombre;
	// hasDF = false;
	this -> DF = DF;
	this -> hakiObs = hakiObs;
	this -> hakiArm = hakiArm;
	this -> hakiRey = hakiRey;
}

// raza
/* void Being::setRaza(int r)
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
} */
string Being::getRaza() { return raza; }
// edad
int Being::getEdad() { return edad; }
// nombre
string Being::getNombre() { return nombre; }
// hasDF
void Being::setHasDF(bool hasDF) { this -> hasDF = hasDF; }
bool Being::getHasDF() { return hasDF; }
// DF
DevilsFruit* Being::getDF() { return DF; }
// hakis
void Being::setHakiObs(bool hakiObs) { this -> hakiObs = hakiObs; }
bool Being::getHakiObs() { return hakiObs; }
void Being::setHakiArm(bool hakiArm) { this -> hakiArm = hakiArm; }
bool Being::getHakiArm() { return hakiArm; }
void Being::setHakiRey(bool hakiRey) { this -> hakiRey = hakiRey; }
bool Being::getHakiRey() { return hakiRey; }
