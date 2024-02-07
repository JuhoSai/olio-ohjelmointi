#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include <vector>

using namespace std;

class Katutaso : public Asunto
{
private:
    vector<Asunto> asunnot;
public:
    Katutaso();
    ~Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double sahkohinta) const;
};

#endif // KATUTASO_H
