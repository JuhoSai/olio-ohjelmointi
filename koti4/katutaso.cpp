#include "katutaso.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu " << endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout << "maaritetaan 2 kpl katutason asuntoja" << endl;

    Asunto asunto1, asunto2;
    asunto1.maarita(2, 100);
    asunto2.maarita(2, 100);
    asunnot.push_back(asunto1);
    asunnot.push_back(asunto2);

}

double Katutaso::laskeKulutus(double sahkohinta) const
{
    double kokonaiskulutus = 0;
    for (const auto &asunto : asunnot)
    {
        kokonaiskulutus += asunto.laskeKulutus(sahkohinta);
    }
    return kokonaiskulutus;
}
