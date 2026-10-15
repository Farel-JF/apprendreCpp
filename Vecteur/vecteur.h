#ifndef VECTEUR_H
#define VECTEUR_H
class Vecteur
{
public:
   // Vecteur(const int _x,const int _y); // ce premier constructeur initialise x et y avec les paramètres

    Vecteur(const int _x, const int _y); // celui-ci initialise x et y à 0
    int getX() const; // accesseur pour l'attribut x
    void setX(const int _newX); // mutateur pour l'attribut x
    int getY() const;
    void setY(const int _newY);
    Vecteur operator+ (const Vecteur &_autre);
    bool operator==(const Vecteur &_autre);

    // Surcharge des opérateurs demandés
    Vecteur& operator+=(const Vecteur& v);
    Vecteur operator-(const Vecteur& v) const;
    Vecteur& operator-=(const Vecteur& v);

    // Produit vectoriel pour * et *=
    Vecteur operator*(const Vecteur& v) const;
    Vecteur& operator*=(const Vecteur& v);

    void Afficher();
private:
    int x;
    int y;
};
#endif // VECTEUR_H