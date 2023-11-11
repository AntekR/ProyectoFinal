#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "arma.h"
#include <string>
using namespace std;

class personaje
{
public:
    personaje(string name, double x, double y, int salud);
    void moverse(double x, double y);
    void atacar();
private:
    string nombre;
    double posX, posY;
    int salud;
    Arma arma;
};

#endif // PERSONAJE_H
