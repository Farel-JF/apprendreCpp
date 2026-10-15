#include "menu.h"
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};
int main()
{
    int choix;
    Menu leMenu("menu.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            Menu::AttendreAppuiTouche();
            break;
                }
    } while(choix != QUITTER);
    return 0;
}
