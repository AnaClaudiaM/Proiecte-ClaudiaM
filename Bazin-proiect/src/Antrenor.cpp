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
    Afiseaza_lista_cursanti();
    cout << endl;
}

void Antrenor::Afiseaza_lista_cursanti()
{
   unsigned int size = client.size();
    for(auto& it:client)
   {
        cout << " Nume cursant : " << it.getNumeCursant() << endl ;
        cout << " Varsta cursant: " <<it.getVarstaCursant() << endl;
   }

}



Antrenor::~Antrenor()
{
    //dtor
}
