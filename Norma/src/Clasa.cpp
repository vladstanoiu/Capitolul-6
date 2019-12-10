#include "Clasa.h"
#include <iostream>
using namespace std;


Clasa::Clasa (){}
Clasa::Clasa (unsigned short mem1, unsigned short mem2, char mem3)
{
  _an = mem1;
  _orePeSapt =mem2;
  _litera= mem3;
}
void Clasa::AfiseazaOre(){
    cout <<  "Clasa a " << _an << _litera << " : " << _orePeSapt <<  " ore / sapt"  << endl;
}

Clasa::~Clasa()
{
    //dtor
}
