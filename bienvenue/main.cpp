#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int val = 168;
    float pi = 3.141592654;
    cout << "Affichage par défaut : " << val << endl;
    cout << "Affichage en hexadécimal : " << hex << val << endl;
    cout << setfill('-') << setw(21) << "Hello" << endl;
    cout << setprecision(4) << pi<< endl;
    return 0;
}