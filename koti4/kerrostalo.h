#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo : public Katutaso, public Kerros
{
public:
    Kerrostalo();
    ~Kerrostalo();

    double laskeKulutus(double sahkohinta) const override;
};

#endif // KERROSTALO_H
