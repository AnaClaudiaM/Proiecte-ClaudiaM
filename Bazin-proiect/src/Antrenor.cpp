#include "Antrenor.h"
#include<string>
#include"Cursant.h"
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
void Antrenor::Adauga_cursant()
{
    string numeCurs;
    cout << " Introduceti numele cursantului " << endl;
    cin >> numeCurs;
    Cursant cursant(numeCurs);
    client.push_back(cursant);
    cout << endl;
}
void Antrenor::Afiseaza_lista_cursanti()
{
    unsigned int size = client.size();
    for(auto& antr:client)
   {
        cout << " Nume cursant : " << antr.getNumeCursant() ;

    }
}



Antrenor::~Antrenor()
{
    //dtor
}
