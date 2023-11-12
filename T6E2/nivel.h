#ifndef NIVEL_H
#define NIVEL_H

using namespace std;

#include "personaje.h"
#include "rick.h"
#include "morty.h"
#include <vector>

class Nivel
{
public:
    Nivel(){}

    void createPersonaje(Rick* rick, Morty* morty);
    void createEnemigos(int numero);
    void createObstaculos(int numero);
    void setPieza(pair<double,double> pieza);
    pair<double, double> getPieza();
    void actualizar();
    bool FinalizadoQ();

protected:
    vector<Personaje*> personajes;
    vector<Personaje*> enemigos;
    vector<Personaje*> obstaculos;
    pair<double, double> piezaFaltante;

};

#endif // NIVEL_H
