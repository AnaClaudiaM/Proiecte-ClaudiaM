#include "Bazin.h"
#include<iostream>
#include<stdlib.h>
#include<Antrenor.h>
#include<typeinfo>
#include<vector>
#include<limits>
#include<string>
using namespace std;


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
            //case 2: Sterge_antrenor();break;
            //case 3: Afisare_ore_antrenor();break;
//            case 4: Adauga_cursant();break;
//            case 5: Sterge_cursant();break;
//            case 6: Vizualizare_cursanti()break;
//            case 0:
//                return 0;
//                break;
            default:
                cout << endl;
                cout << " Optiunea nu este valida. \n" << endl;
                cout << " Introduceti din nou optiunea " << endl;


        }
        } while(input);
}

void Bazin::Adauga_antrenor()
{ string nume;
  int cod;
    cout << " Introduceti nume antrenor " << endl;
   cin >> nume;
   cout << " Introduceti cod antrenor " << endl ;
   cin >> cod;
   Antrenor antrenor(nume,cod);
   listaA.push_back(antrenor);
   cout << endl;
}
void Bazin:: Afiseaza_lista_antrenori()
{
    unsigned int size = listaA.size();
    for(const auto& antr:listaA)
   {
        cout << " Nume antrenor : " << antr.getNume() ;
        cout << " Id antrenor : " << antr.getCod() ;
    }
}

//void Bazin::Sterge_antrenor()
//{
//
//    cout << " Lista antrenorilor si codurile lor : " <<endl;
//    AfiseazaLista(listaA);
//    cout << " Introduceti numarul antrenorului de sters " << endl;
//    listaA.pop_back()











