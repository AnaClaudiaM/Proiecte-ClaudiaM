#include "Bazin.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<Antrenor.h>
#include<typeinfo>
#include<vector>
#include<limits>
#include<string>
#include<algorithm>
#include"Cursant.h"
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
    {   system("CLS");
        cout << endl;
        cout << " Optiuni disponibile:\n ";
        cout << " 1 - Adauga antrenor\n ";
        cout << " 2 - Lista antrenori\n " ;
        cout << " 3 - Sterge antrenor\n ";
        cout << " 4 - Afisare ore antrenor\n ";
        cout << " 5 - Adauga cursant\n ";
        cout << " 6 - Sterge cursant\n ";
        cout << " 7 - Vizualizare cursanti potentiali\n ";
        cout << " 0 - Iesire \n ";
        cout << " Introduceti optiunea dorita : numar intreg si pozitiv :  ";
        cin >> optiune;
        system("CLS");

        switch (optiune)
        {
            case 1: Adauga_antrenor();break;
            case 2: Afiseaza_lista_antrenori();break;
            case 3: Sterge_antrenor();break;
            //case 4: Afisare_ore_antrenor();break;
            case 5: Adauga_cursant();break;
            //case 6: Sterge_cursant();break;
            //case 7: Vizualizare_cursanti()break;
            case 0:
//                return 0;
//                break;
            default:
                cout << endl;
                cout << " Optiunea nu este valida. \n" << endl;
                cout << " Introduceti din nou optiunea " << endl;


        }
        cin.ignore();
        cin.get();
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
    Antrenor listaCursanti;
    listaCursanti.Afiseaza_lista_cursanti();



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

void Bazin::Adauga_cursant()
{   int cautaCod;
    int categorie;
    string numeCurs;
    string varsta;
    cout << " Introduceti numele cursantului " << endl;
    cin >> numeCurs;
    cout << " Introduceti categoria de varsta " << endl;
    cout << " Selectati categoria : " << endl;
    cout << " 1.copil\n";
    cout << " 2.student\n";
    cout << " 3.adult\n" ;
    cout << " 4.pensionar\n";
    cout << " 0.revenire ecran anterior\n";
    //*******************************************************************
    //Obs : Tu iti bazezi switch-ul pe valoarea unei variabile,categorie,
    // a carei valoare nu o citesti niciunde !
    // In schimb citesti din nou, fara sa fie nevoie, o valoare pentru
    // variabila varsta, desi variabila varsta primeste deja valoarea
    // potrivita in switch.
    // Te las pe tine sa descoperi cum sa corectezi :)
    //********************************************************************
    cin >> categorie;
    switch(categorie)
    {
        case 1 : varsta = " copil "; break;
        case 2 : varsta = " student "; break;
        case 3 : varsta = " adult "; break;
        case 4 : varsta = " pensionar "; break;
        case 0 : break;
        default:
            cout << " Introduceti un numar intre 0 si 4 "<< endl;
    }


    //Cursant cursant(numeCurs,varsta);
    //client.push_back(cursant);
    cout << endl;
    Afiseaza_lista_antrenori();
    cout << " Selectati codul antrenorului dorit ";
    cin >> cautaCod;
    std::vector<Antrenor>::iterator antr;
    for(antr=listaA.begin();antr!=listaA.end();++antr)
    {
        if(cautaCod==antr->getCod())break;

    }
    if(antr !=listaA.end())
        antr->Adauga_cursant(numeCurs,varsta);



}










