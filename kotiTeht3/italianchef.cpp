#include "italianchef.h"
#include <iostream>
#include <ostream>
using namespace std;


ItalianChef::ItalianChef(string chefName, double jauhotAmount, double vesiAmount )
    : chef(chefName), jauhot(jauhotAmount), vesi(vesiAmount)
{
   // cout << "Chef " << name << "konstruktori" << endl;

}

ItalianChef::~ItalianChef()
{
    //cout << "Chef " << name << "destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << "makes pasta with special recipe" << endl;
    cout << "Chef " << name << "uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << "uses vesi = " << vesi  <<  endl;
}
