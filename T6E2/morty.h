#ifndef MORTY_H
#define MORTY_H

#include "arma.h"
#include "personaje.h"

using namespace std;

class Morty : public Personaje
{
public:
    Morty(pair<double, double> posicion, int salud, int ataque, Arma* arma);

};

#endif // MORTY_H
