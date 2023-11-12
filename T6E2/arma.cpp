#include "arma.h"

Arma::Arma(int danno)
{
    this->damage = danno;
}

int Arma::getDamage()
{
    return damage;
}
