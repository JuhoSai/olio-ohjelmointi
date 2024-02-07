#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{

}


void Kerros::maaritaAsunnot()
{
    //cout << "maaritetaan 4 kpl kerroksen asuntoja" << endl;
    Asunto asunto1, asunto2, asunto3, asunto4;
    asunto1.maarita(2, 100);
    asunto2.maarita(2, 100);
    asunto3.maarita(2, 100);
    asunto4.maarita(2, 100);
    asunnot.push_back(asunto1);
    asunnot.push_back(asunto2);
    asunnot.push_back(asunto3);
    asunnot.push_back(asunto4);
}

double Kerros::laskeKulutus(double sahkohinta) const
{
    double kokonaiskulutus = 0;
    for (const auto &asunto : asunnot)
    {
        kokonaiskulutus += asunto.laskeKulutus(sahkohinta);
    }
    return kokonaiskulutus;
}
