// Zoan.h, hija de Fruta del Diablo

#include "DevilsFruit.h"

#ifndef ZOAN_H
#define ZOAN_H

class Zoan : public DevilsFruit
{
	private:
		string tipo;
	
	public:
		Zoan(string, int); // nombre, tipo
		
		void setTipo(int);
		string getTipo();
};

#endif
