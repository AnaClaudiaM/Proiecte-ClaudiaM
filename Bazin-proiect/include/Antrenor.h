#ifndef ANTRENOR_H
#define ANTRENOR_H
#include<string>


class Antrenor
{
    public:
        Antrenor();
        Antrenor(std::string,int);
        virtual ~Antrenor();
        int Afisare_ore_antrenor;
        void Adauga_cursant();
        void Sterge_cursant();

    protected:

    private:
        std::string nume_antrenor;
        int cod_unic;
        int ore;
        //std::vector <Cursant>client;

};

#endif // ANTRENOR_H
