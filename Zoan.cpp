// Zoan.cpp, hija de Fruta del Diablo

#include "Zoan.h"

Zoan::Zoan(string nombre, string tipo) : DevilsFruit(nombre) { this -> tipo = tipo; }

/* void Zoan::setTipo(int t)
{
	if(t == 1)
        	tipo = "Normal";
        else if(t == 2)
        	tipo = "Pre-historica";
        else if(t == 3)
        	tipo = "Legendaria";
      	else
        	tipo = "Normal";
} */
string Zoan::getTipo() { return tipo; }
