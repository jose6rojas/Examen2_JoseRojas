// Fruta del Diablo.h

#include <string>

using namespace std;

#ifndef DEVILSFRUIT_H
#define DEVILSFRUIT_H

class DevilsFruit
{
        protected:
                string nombre;
	
        public:
                DevilsFruit(string);

                string getNombre();
};

#endif
