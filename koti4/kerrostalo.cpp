#include "kerrostalo.h"
#include <iostream>
Kerrostalo::Kerrostalo()
{

}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double sahkohinta) const
{
    double kokonaiskulutus = 0;

    const_cast<Kerrostalo*>(this)->Katutaso::maaritaAsunnot();
    const_cast<Kerrostalo*>(this)->Kerros::maaritaAsunnot();

    kokonaiskulutus += Katutaso::laskeKulutus(sahkohinta);
    kokonaiskulutus += Kerros::laskeKulutus(sahkohinta);
    kokonaiskulutus += Kerros::laskeKulutus(sahkohinta);

    cout << "Kerrostalon kulutus = " << kokonaiskulutus << endl;

    return kokonaiskulutus;
}
