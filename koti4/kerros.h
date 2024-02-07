#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <vector>
using namespace std;

class Kerros : public Asunto
{
private:
    vector<Asunto> asunnot;

public:
    Kerros();
    ~Kerros();

    void maaritaAsunnot();
    double laskeKulutus(double sahkohinta) const;
};

#endif // KERROS_H
