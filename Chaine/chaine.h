#ifndef CHAINE_H
#define CHAINE_H

class Chaine
{
public:
    Chaine(const char * _texte = "");
    Chaine(const Chaine & _src);
    Chaine(char *_contenu, int _longueur);
    ~Chaine();
    Chaine & operator=( const Chaine & _src);


    char *getContenu() const;
    void setContenu(char *_newContenu);

    int getLongueur() const;
    void setLongueur(int _newLongueur);
    void Afficher() const;

private:
    int longueur;
    char * contenu;

};

#endif // CHAINE_H
