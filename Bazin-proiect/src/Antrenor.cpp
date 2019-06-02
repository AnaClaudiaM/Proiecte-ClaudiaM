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



Antrenor::~Antrenor()
{
    //dtor
}
