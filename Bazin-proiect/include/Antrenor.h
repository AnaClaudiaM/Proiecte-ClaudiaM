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
        //std::vector <Cursant>client;

};

#endif // ANTRENOR_H
