#ifndef BAZIN_H
#define BAZIN_H
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
        void Sterge_antrenor();
        void Iesire();






    protected:

    private:
        std::vector<Antrenor>listaA;
        //std::string nume_antrenor;
        //int cod_unic;
};

#endif // BAZIN_H
