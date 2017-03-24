// Logia.h, hija de Fruta del Diablo

#include "DevilsFruit.h"

#ifndef LOGIA_H
#define LOGIA_H

class Logia : public DevilsFruit
{
	private:
		string elemento;
	
	public:
		Logia(string, string); // nombre, elemento
		
		string getElemento();
};

#endif
