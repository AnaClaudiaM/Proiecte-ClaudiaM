#include "Bazin.h"
#include<iostream>
#include<stdlib.h>
#include<Antrenor.h>
#include<typeinfo>
#include<vector>
#include<limits>
#include<string>
#include<algorithm>
#include"Cursant.h"
using namespace std;
Antrenor cursantAntrenor;


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
        cout << " 1 - Adauga antrenor \n ";
        cout << " 2 - Sterge antrenor \n ";
        cout << " 3 - Afisare ore antrenor \n ";
        cout << " 4 - Adauga cursant \n ";
        cout << " 5 - Sterge cursant \n ";
        cout << " 6 - Vizualizare cursanti potentiali\n";
        cout << " 0 - Iesire \n ";
        cout << " Introduceti optiunea dorita :  ";
        cin >> optiune;

        switch (optiune)
        {
            case 1: Adauga_antrenor();break;
            case 2: Sterge_antrenor();break;
            //case 3: Afisare_ore_antrenor();break;
            case 4: cursantAntrenor.Adauga_cursant();break;
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
   cout << "  Introduceti cod antrenor " << endl ;
   cin >> cod;
   Antrenor antrenor(nume,cod);
   listaA.push_back(antrenor);
   cout << endl;
}
void Bazin:: Afiseaza_lista_antrenori()
{
    unsigned int size = listaA.size();
    for(auto& antr:listaA)
   {
        cout << " Nume antrenor : " << antr.getNume()<< endl ;
        cout << " Id antrenor : " << antr.getCod() << endl ;
        cout << endl;
    }
}

void Bazin::Sterge_antrenor()
{  int nr_antrenor;
   cout << " Lista antrenorilor si codurile lor : " << endl;
   cout << endl;
   Afiseaza_lista_antrenori();
    cout << " Introduceti id-ul antrenorului de sters " << endl;
    cin >> nr_antrenor;
    std::vector<Antrenor>::iterator antr;
    for(antr=listaA.begin();antr!=listaA.end();++antr)
    {
        if(nr_antrenor==antr->getCod())break;

    }
    if(antr !=listaA.end())
        listaA.erase(antr);



}










