// Paramecia.cpp, hija de Fruta del Diablo

#include "Paramecia.h"

Paramecia::Paramecia(string nombre, string descripcion) : DevilsFruit(nombre) { this -> descripcion = descripcion; }

string Paramecia::getDescripcion() { return descripcion; }
