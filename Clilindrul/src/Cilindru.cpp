#include "Cilindru.h"
#include "Cerc.h"


Cilindru::Cilindru (double baza , double inaltime): _baza(baza)
{
_inaltime = inaltime;
}

 double Cilindru::Volum(){
    return (_baza.Arie()*_inaltime);
}

 double Cilindru::Arie()
{
    return 2*_baza.Arie()+2*3.14*_baza.Get_raza()*_inaltime;
}
Cilindru::~Cilindru()
{
    //dtor
}
