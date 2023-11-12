#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <utility>
#include "arma.h"

using namespace std;


class Personaje
{
public:

    Personaje( pair<double,double> posicion, int salud, int ataque, Arma* arma);

    void moverse(double x, double y);
    virtual void atacar(Personaje* objetivo);

    int getSalud();
    int getAtaque();
    pair<double,double> getPosicion();


protected:

    pair<double,double> posicion;
    int salud;
    int ataque;
    Arma* arma;
};

#endif // PERSONAJE_H
