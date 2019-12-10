#ifndef NORMAPROF_H
#define NORMAPROF_H
#include "Clasa.h"

enum Materie {fizica , matematica , chimie, romana , sport};

class NormaProf
{
    public:

        NormaProf (Materie , Clasa, Clasa , Clasa );
        void AfiseazaOre();
        int CalculeazaTotalOre();
        virtual ~NormaProf();

    protected:

    private:
        Materie _materie;
        Clasa _clasa1;
        Clasa _clasa2;
        Clasa _clasa3;
};

#endif // NORMAPROF_H
