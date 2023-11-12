#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <utility>
using namespace std;
#include "arma.h"

class personaje
{
public:

    personaje( double x, double y, int salud, arma* arma);
    void moverse(double x, double y);
    virtual void atacar(personaje* objetivo) = 0;
    int getSalud();
    pair<double,double> getPosicion();

protected:

    pair<double,double> posicion;
    int salud;
    arma* arma;
};

#endif // PERSONAJE_H
