#include "BecReglabil.h"
#include<iostream>
using namespace std;

BecReglabil::BecReglabil(unsigned short putereM, unsigned short putereC)
{
    _putereMaxima=putereM;
    _putereCurenta=putereC;
    if(_putereCurenta==0)
        {
            _aprins=false;
        }
    else
        {
            _aprins=true;
        }
}
void BecReglabil::Aprinde()
{
    _aprins=true;
    _putereCurenta=_putereMaxima;
}
void BecReglabil::Stinge()
{   _aprins=false;
    _putereCurenta=0;
}
void BecReglabil::MaresteLumina(unsigned short lumina)
{   _putereCurenta +=lumina;
    if(_putereCurenta > _putereMaxima)
        {
            _putereCurenta=_putereMaxima;

        }
    _aprins=true;

}
void BecReglabil::ReduceLumina(unsigned short luminaRedusa)
{  _putereCurenta-=luminaRedusa;
    if(_putereCurenta <0)
        {
            _putereCurenta=0;

        }
    else if (_putereCurenta==0)
        {
            _aprins=false;
        }
}
void BecReglabil::StareBec()
{   if(_aprins==true)
    {
        cout << " Becul este aprins " << endl;
    }
    else
        {cout<<" Becul este stins " << endl;
    }
}

BecReglabil::~BecReglabil()
{
    //dtor
}
