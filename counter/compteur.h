#ifndef COMPTEUR_H
#define COMPTEUR_H

class Compteur
{
public:
    Compteur();
    ~Compteur();
    void Incrementer();
    int Valeur()const;
    static int NombreInstances(); //méthode statique
private:
    int valeur;
    static int nbInstances; //attribut statique
};
#endif