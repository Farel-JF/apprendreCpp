#ifndef _IPV4_H
#define _IPV4_H

class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque;
public:
    IPv4(); // constructeur par défaut
    IPv4(const unsigned char * _adresse, unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    IPv4(const IPv4 & _ipv4); // constructeur de copie → §2.8.4
    ~IPv4(); // destructeur
    IPv4 & operator=(const IPv4 & _ipv4); // opérateur d'affectation
private:
    void CalculerMasque(unsigned char _cidr);
public:
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
};
#endif