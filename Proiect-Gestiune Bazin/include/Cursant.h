#ifndef CURSANT_H
#define CURSANT_H
#include<iostream>



class Cursant
{
    public:
        Cursant();
        Cursant(std::string,std::string);
        std::string getNumeCursant()
        {
            return nume_cursant;
        }
        std::string getVarstaCursant()
        {
            return varsta_cursant;
        }

        virtual ~Cursant();

    protected:

    private:
        std::string nume_cursant;
        std::string varsta_cursant;
};

#endif // CURSANT_H
