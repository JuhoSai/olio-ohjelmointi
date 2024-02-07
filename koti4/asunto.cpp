#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto() : asukasMaara(2), neliot(100)
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukasMaara, int neliot)
{
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
    cout << "Asunto maaritettu asukkaita = " << asukasMaara << " neliota = " << neliot  << endl;


}

double Asunto::laskeKulutus(double sahkohinta) const
{
    return asukasMaara * neliot * sahkohinta;
}
