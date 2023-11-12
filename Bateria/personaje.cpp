#include "personaje.h"

personaje::personaje(double x, double y, int vida, class arma* gun)
{
    posicion.first = x;
    posicion.second = y;
    salud = vida;
    arma = gun;

}

void personaje::moverse(double x, double y)
{
    posicion.first += x;
    posicion.second += y;
}


