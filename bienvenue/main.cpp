#include <iostream>
using namespace std;
int main()
{
    int val1;
    int val2;
    cout << "Entrée deux valeurs : " << endl;
    cin >> val1 >> val2;
    float resultat;
    resultat = val1/static_cast<float>(val2);
    cout << "Le resultat est : " << resultat << endl;
    return 0;
}
/*#include <iostream>
using namespace std;

int main(){
    int val1 = 9;
    int val2 = 4;
    float resultat;
    resultat = val1/static_cast<float>(val2);
    cout << "Le resultat est : " << resultat << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int nombre1, nombre2 ;
    try
    {
        cout << "Entrez deux nombres entiers : ";
        cin >> nombre1 >> nombre2 ;
        if(nombre2 == 0)
            throw string("Erreur de division par ZÉRO !");
        else
            cout << nombre1 / nombre2 << endl;
    }
    catch(string const& chaine)
    {
        cerr << chaine << endl;
    }
    return 0;
}*/














