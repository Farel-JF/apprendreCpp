#include <iostream>
#include "ipv4_coplien.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    IPv4 adresseIP;
    IPv4 adresse1(adresseIP);
    IPv4 adresse2 = adresseIP;
    adresse1 = adresseIP;
    return 0;
}
