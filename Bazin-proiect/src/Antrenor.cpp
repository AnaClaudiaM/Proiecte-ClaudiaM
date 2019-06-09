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
void Antrenor::Adauga_cursant(string numeCursant,string varsta)
{
    Cursant cursant(numeCursant,varsta);
    client.push_back(cursant);
    cout << endl;
//    Afiseaza_lista_antrenori();
//    cout << " Selectati codul antrenorului dorit ";
//    cin >> cautaCod;
//    std::vector<Antrenor>::iterator antr;
//    for(antr=listaA.begin();antr!=listaA.end();++antr)
//    {
//        if(cautaCod==antr->getCod())break;
//
//    }
//    if(antr !=listaA.end())
//        antr->Adauga_cursant(numeCurs,varsta);




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
