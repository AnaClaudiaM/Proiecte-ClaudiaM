#include "Antrenor.h"
#include<string>
#include"Cursant.h"
#include"Bazin.h"
using namespace std;

Antrenor::Antrenor()
{
    //ctor
}
Antrenor::Antrenor(string numeAntrenor,int codAntrenor)
{
    nume_antrenor = numeAntrenor;
    cod_unic = codAntrenor;
}
void Antrenor::Adauga_cursant(string numeCursant)
{
    Cursant cursant(numeCursant);
    client.push_back(cursant);
    cout << endl;
    int categorie;
    cout << " Selectati categoria : " << endl;
    cout << " 1.copil\n";
    cout << " 2.student\n";
    cout << " 3.adult\n" ;
    cout << " 4.pensionar\n";
    cout << " 0.revenire ecran anterior\n";

    switch(categorie)
    {
        case 1 : varsta = " copil "; break;
        case 2 : varsta = " student "; break;
        case 3 : varsta = " adult "; break;
        case 4 : varsta = " pensionar "; break;
        case 0 : break;
        default:
            cout << " Introduceti un numar intre 0 si 4 " << endl;
    }


}
void Antrenor::Afiseaza_lista_cursanti()
{
//   unsigned int size = client.size();
//   std::vector<Cursant>::iterator curs;
//   for(curs=client.begin();curs!=client.end(); ++curs)
//
//      cout << " Nume cursant " << curs->getNumeCursant();



   unsigned int size = client.size();
    for(auto& it:client)
   {
        cout << " Nume cursant : " << it.getNumeCursant() << endl ;


    }

//int Antrenor::Afisare_ore_antrenor
//{
//    Afiseaza_lista_cursanti();
//}
//




}




Antrenor::~Antrenor()
{
    //dtor
}
