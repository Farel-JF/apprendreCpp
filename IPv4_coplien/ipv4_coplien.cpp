#include "ipv4_coplien.h"

IPv4::IPv4()
{
    adresse = new unsigned char[4];
    masque = new unsigned char[4];
}
IPv4 & IPv4::operator=(const IPv4 & _ipv4)
{
    if (adresse != _ipv4.adresse || masque != _ipv4.masque)
    {
        if (adresse != nullptr && masque != nullptr)
        {
            delete[] adresse;
            delete[] masque;
        }
        adresse = new unsigned char[4];
        masque = new unsigned char[4];
        for (int indice = 0; indice < 4; indice++)
        {
            adresse[indice] = _ipv4.adresse[indice];
            masque[indice] = _ipv4.masque[indice];
        }
    }
    return *this;
}