#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class chef
{
protected:
    string name;

public:
    chef(string chefName);
    ~chef();
    void Chef(string);
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
