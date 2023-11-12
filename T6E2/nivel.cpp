#include "nivel.h"



void Nivel::createPersonaje(Rick *rick, Morty *morty)
{
    personajes.push_back(rick);
    personajes.push_back(morty);
}

void Nivel::createEnemigos(int numero)
{
    for (int i = 0; i < numero; ++i) {
        enemigos.push_back(new Personaje(make_pair(25.0,25.0),100,10, new Arma(10)));
    }
}

void Nivel::createObstaculos(int numero)
{
    for (int i = 0; i < numero; i++) {
        obstaculos.push_back(new Personaje(make_pair(0.0, 0.0), 100, 0, new Arma(0)));
    }
}

void Nivel::setPieza(pair<double, double> pieza)
{
    piezaFaltante = pieza;
}

pair<double,double> Nivel::getPieza()
{
    return piezaFaltante;
}

void Nivel::actualizar()
{
    for (Personaje* personaje : personajes) {
        personaje->moverse(0.1, 0.0);
    }

    for (Personaje* enemigo : enemigos) {
        enemigo->moverse(0.0, 0.1);
    }
}

bool Nivel::FinalizadoQ()
{
    return piezaFaltante.first != 0.0 && piezaFaltante.second != 0.0;
}
