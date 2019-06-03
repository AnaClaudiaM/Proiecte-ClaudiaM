#ifndef BAZIN_H
#define BAZIN_H
#include "Antrenor.h"
#include<iostream>
#include<vector>
using namespace std;




class Bazin
{
    public:
        Bazin();
        virtual ~Bazin();
        void Meniu_principal();
        void Adauga_antrenor();
        void Afiseaza_lista_antrenori();
        void Sterge_antrenor();
        void Adauga_cursant();
        //void Iesire();

    protected:

    private:
        vector<Antrenor>listaA;

};

#endif // BAZIN_H
