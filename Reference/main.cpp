const int NB_ELEMENTS = 10;
void Ajouter(int a, int b ,int &c);
void Ajouter(int a, int b ,int &c)
{
    c= a+b ;
}

int main()
{

    int a = 1;
    int b = -2;
    int c = 0;

    cout << "avant l'appel de Ajouter" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    // Appel le la fonction Ajouter à compléter dans le tableau suivant le cas.
    Ajouter(a, b, c);
    cout << "après l'appel de Ajouter" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    return 0;
}
