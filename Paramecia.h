// Paramecia.h, hija de Fruta del Diablo

#include "DevilsFruit.h"

#ifndef PARAMECIA_H
#define PARAMECIA_H

class Paramecia : public DevilsFruit
{
	private:
		string descripcion;
	
	public:
		Paramecia(string, string); // nombre, descripcion
		
		string getDescripcion();
};

#endif
