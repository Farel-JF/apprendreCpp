#include "vecteur.h"


int Vecteur::getX() const
{
    return x;
}
void Vecteur::setX(const int _newX)
{
    x = _newX;
}

int Vecteur::getY() const{
    return y;
}
void Vecteur::setY(const int __newY){
    y =__newY;
}

Vecteur::Vecteur(const int _x, const int _y) :
    x(_x),
    y(_y)
{}
