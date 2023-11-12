#include "personaje.h"

Personaje::Personaje( pair<double,double> posXY, int vida, int at, class Arma* gun)
{
    posicion = posXY;
    salud = vida;
    arma = gun;
    ataque = at;

}

void Personaje::moverse(double x, double y)
{
    posicion.first += x;
    posicion.second += y;
}

int Personaje::getAtaque()
{
    return ataque;
}


void Personaje::atacar(Personaje *objetivo)
{
    objetivo->salud -= ataque;
}

