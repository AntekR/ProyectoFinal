#include "arma.h"

arma::arma(int danno)
{
    this->damage = danno;
}

int arma::getDamage()
{
    return damage;
}
