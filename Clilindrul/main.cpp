#include <iostream>
#include "Cilindru.h"
#include "Cerc.h"

using namespace std;

int main()
{
    //În funcția main declarați obiectul chilly de tip Cilindru cu valorile 2 și 5 pentru raza bazei respectiv înălțime.
    Cilindru chilly(2,5);

    cout << "Volumul lui Chilly este "<< chilly.Volum() << endl; //Afișați volumul și aria lui chilly.
    cout << "Aria lui Chilly este "<< chilly.Arie() << endl;

    //Declarați pe heap un tablou cu două elemente de tip Cilindru furnizând constructorului valorile 2 și 5, respectiv 5 și 2. Numiți pointerul care arată spre acel tablou hipster.
     Cilindru* hipster = new Cilindru[2]{Cilindru{2,5}, Cilindru{5,2}};
    cout << '\n';
     //Afișați volumul și aria fiecărui element din hipster.
     cout << "Volumul primului Hipster este: " << hipster[0].Volum()<<endl;
     cout << "Aria primului Hipster este: " << hipster[0].Arie()<<endl;
     cout << "Volumul celui de-al doilea Hipster este: " << hipster[1].Volum()<<endl;
     cout << "Aria celui de-al doilea Hipster este: " << hipster[1].Arie()<<endl;

    return 0;
}

/* Creați clasa Cerc astfel încât să conțină:

membrul _raza de tip double
un constructor cu un parametru double care să inițializeze membrul raza
o metoda Arie care să returneze aria cercului folosind formula „PI * R^2”
un getter pentru _raza
Creați clasa Cilindru astfel încât să conțină:

membrul _baza de tip Cerc
membrul _inaltime de tip double
un constructor cu doi parametri double, unul pentru raza bazei și celălalt pentru înălțime, care să inițializeze membrii de mai sus
Notă: În cazul lui _baza e nevoie să apelați constructorul cu un parametru din clasa Cerc furnizând-i parametrul primit pentru raza bazei

o metodă Volum care să returneze volumul cilindrului folosind formula „aria bazei * înălțimea”
o metodă Arie care să returneze aria cilindrului folosind formula „2 * aria bazei + 2 * PI * raza * înălțimea” */
