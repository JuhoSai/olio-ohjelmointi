#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>
using namespace std;

class ItalianChef : public chef
{
private:
    double jauhot;
    double vesi;

public:
    ItalianChef(string chefName, double jauhotAmount, double vesiAmount);
    ~ItalianChef();

    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
