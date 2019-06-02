#ifndef ANTRENOR_H
#define ANTRENOR_H


class Antrenor
{
    public:
        Antrenor();
        virtual ~Antrenor();
        int Afisare_ore_antrenor;
        void Adauga_cursant();
        void Sterge_cursant();

    protected:

    private:
        string nume_antrenor;
        int cod_unic;
        int ore;
        vector <Cursant>client;

};

#endif // ANTRENOR_H
