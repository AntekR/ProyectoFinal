#ifndef RICK_H
#define RICK_H

#include "personaje.h"

class Rick : public Personaje
{
public:
    Rick(pair<double, double> posicion, int salud, int ataque, Arma* arma);

};

#endif // RICK_H
