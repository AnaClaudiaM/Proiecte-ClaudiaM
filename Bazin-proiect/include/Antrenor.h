#ifndef ANTRENOR_H
#define ANTRENOR_H
#include<string>
#include<iostream>
#include<vector>
#include<Cursant.h>


class Antrenor
{
    public:
        Antrenor();
        Antrenor(std::string,int);
        virtual ~Antrenor();
        int Afisare_ore_antrenor();
        void Adauga_cursant(std::string,std::string);
        void Afiseaza_lista_cursanti();
        void Sterge_cursant();

        std::string getNume()
        {
            return nume_antrenor;
        }
        int getCod()
        {
            return cod_unic;
        }


    protected:

    private:
        std::string nume_antrenor;
        int cod_unic;
        int ore;
        std::vector<Cursant>client;

};

#endif // ANTRENOR_H
