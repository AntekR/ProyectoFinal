#include "personaje.h"

personaje::personaje(string name, double x, double y, int vida)
{
    nombre = name;
    posX = x;
    posY = y;
    salud = vida;
}

void personaje::moverse(double x, double y){
    posX = x;
    posY = y;
}
