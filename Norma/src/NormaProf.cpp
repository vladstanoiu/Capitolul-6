#include "NormaProf.h"
#include <iostream>
using namespace std;

NormaProf::NormaProf(Materie materie  , Clasa cls1 , Clasa cls2 , Clasa cls3)
{
    _materie = materie;
    _clasa1 = cls1;
    _clasa2 = cls2;
    _clasa3 = cls3;
}
void NormaProf::AfiseazaOre(){
    _clasa1.AfiseazaOre();
    _clasa2.AfiseazaOre();
    _clasa3.AfiseazaOre();
}
int NormaProf::CalculeazaTotalOre(){
    return (_clasa1.GetOrePeSaptamana()+_clasa2.GetOrePeSaptamana()+_clasa3.GetOrePeSaptamana());
}



NormaProf::~NormaProf()
{
    //dtor
}
