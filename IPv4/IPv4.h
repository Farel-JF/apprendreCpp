#ifndef _IPV4_H
#define _IPV4_H
class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque ;
    void CalculerMasque(unsigned char _cidr); // _cidr est utilisé en tant que variable locale dans la
    // méthode (pas de const devant)
public:
    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4();
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
};
    IPv4::IPv4(const unsigned char * _adresse,const unsigned char _cidr)
    {
        adresse = new unsigned char [4];
        masque = new unsigned char [4];
        for(int indice = 0 ; indice < 4 ; indice++)
            adresse[indice] = _adresse[indice];
        if(_cidr <= 32)
            CalculerMasque(_cidr);
    }
    IPv4::IPv4(const unsigned char * _adresse,const unsigned char * _masque)
    {
        adresse = new unsigned char [4];
        masque = new unsigned char [4];
        for(int indice = 0 ; indice < 4 ; indice++)
        {
            adresse[indice] = _adresse[indice];
            masque[indice] = _masque[indice];
        }
    }
    IPv4::~IPv4()
    {
        delete [] adresse;
        delete [] masque ;
    }


    void IPv4::CalculerMasque(unsigned char _cidr)
    {
        int indice ;
        // Le masque est remis à 0 -> 0.0.0.0
        for(indice = 0 ; indice < 4 ; indice++)
            masque[indice] = 0 ;
        indice = 0;
        // tant que le cidr est un multiple de 8
        while(_cidr >= 8)
        {
            masque[indice++] = 255 ;
            _cidr -= 8 ;
        }
        // Complément pour la fin du cidr (<8)
        unsigned char puissance = 128 ;
        while(_cidr-- > 0) // Après le test la variable _cidr est décrémentée
        { // les puissances de 2 sont ajoutées à l'octet par valeur décroissante
            masque[indice] += puissance ;
            puissance /=2 ;
        }
    }

    void IPv4::ObtenirMasque(unsigned char * _masque)
    {
        for(int indice = 0 ; indice < 4 ; indice++)
            _masque[indice] = masque[indice];
    }

    void IPv4::ObtenirAdresseReseau(unsigned char * _reseau)
    {
        for(int indice = 0 ; indice < 4 ; indice++)
            _reseau[indice] = adresse[indice] & masque[indice] ;
    }
    void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
    {
        unsigned char adresseDuReseau[4];
        ObtenirAdresseReseau(adresseDuReseau);
        for(int indice = 0 ; indice < 4 ; indice++)
            _diffusi on[indice] = adresseDuReseau[indice] | ~masque[indice] ;
    }
    void IPv4::ObtenirPremiereAddress(const unsigned char *_premiereAddress)
    {
        //reseau + 1
        ObtenirAdresseReseau(_premiereAddress);
        adress[3] += 1;
    }
    void
    IPv4::ObtenirDerniereAddress(const unsigned char *_derniereAddress)
    {
        //reseau + 1
        ObtenirAdresseDiffusion(_derniereAddress);
        adress[3] -= 1;
    }
#endif
