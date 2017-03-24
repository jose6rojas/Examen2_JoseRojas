// Logia.cpp, hija de Fruta del Diablo

#include "Logia.h"

Logia::Logia(string nombre, string elemento) : DevilsFruit(nombre) { this -> elemento = elemento; }

string Logia::getElemento() { return elemento; }
