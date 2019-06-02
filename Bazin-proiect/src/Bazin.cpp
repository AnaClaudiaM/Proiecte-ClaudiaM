#include "Bazin.h"
#include<iostream>
#include<stdlib.h>
#include<Antrenor.h>
#include<typeinfo>
#include<vector>
#include<limits>
#include<string>
using namespace std;
Antrenor antrenor;


Bazin::Bazin()
{
    //ctor
}

Bazin::~Bazin()
{
    //dtor
}
void Bazin::Meniu_principal()
{
    bool input = true;
    int optiune;
    do
    {
        cout << endl;
        cout << " Optiuni disponibile : \n ";
        cout << endl;
        cout << " 1 - Adauga antrenor .\n ";
        cout << " 2 - Sterge antrenor. \n ";
        cout << " 3 - Afisare ore antrenor.\n ";
        cout << " 4 - Adauga cursant. \n ";
        cout << " 5 - Sterge cursant. \n ";
        cout << " 6 - Vizualizare cursanti potentiali.\n";
        cout << " 0 - Iesire.\n ";
        cout << " Introduceti optiunea dorita : " ;
        cin >> optiune;

        switch (optiune)
        {
            case 1: Adauga_antrenor();break;
            case 2: Sterge_antrenor();break;
            case 3: Afisare_ore_antrenor();break;
            case 4: Adauga_cursant();break;
            case 5: Sterge_cursant();break;
            case 6: Vizualizare_cursanti()break;
            case 0:
                return 0;
                break;
            default:
                cout << endl;
                cout << " Optiunea nu este valida. \n" << endl;
                cout << " Introduceti din nou optiunea " << endl;


        }
        } while(input);
}

void Bazin::Adauga_antrenor()
{
    cout << " Introduceti nume antrenor " << endl;
    cin >> antrenor.nume_antrenor;
    cout << " Introduceti cod antrenor " << endl ;
    cin >> antrenor.cod_unic;
}
void Bazin::Sterge_antrenor()
{

    cout << " Lista antrenorilor si codurile lor : " <<endl;
    cout << listaA << endl;//trebuie afisat vectorul lisataA?
    cout << " Introduceti numarul antrenorului de sters " << endl;
    cin >> antrenor.cod_unic;

}








