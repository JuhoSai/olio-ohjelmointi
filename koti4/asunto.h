#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>
#include <vector>
using namespace std;

class Asunto
{
private:
    int asukasMaara;
    int neliot;

public:
    Asunto();
    virtual ~Asunto();
    void maarita(int asukasMaara, int neliot);
    virtual double laskeKulutus(double sahkohinta) const;
};

#endif // ASUNTO_H
