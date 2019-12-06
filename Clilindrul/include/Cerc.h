#ifndef CERC_H
#define CERC_H
#include "Cilindru.h"


class Cerc
{
private:
        double _raza;
public:
        Cerc(double);
        double Arie();

        double Set_raza (double setRaza) { _raza = setRaza;}
        double Get_raza() {return _raza;}

        virtual ~Cerc();


protected:


};

#endif // CERC_H
