#ifndef CILINDRU_H
#define CILINDRU_H
#include "Cerc.h"

class Cilindru
{
    private:
        Cerc _baza;
        double _inaltime;

    public:
        Cilindru(double , double);
        double Volum();
        double Arie();
       // double Set_baza (double setBaza) { _baza = setBaza;}
        //double Get_baza() {return _baza;}
        virtual ~Cilindru();

    protected:


};

#endif // CILINDRU_H
