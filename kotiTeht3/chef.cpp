#include "chef.h"
#include <iostream>
#include <ostream>
using namespace std;


chef::chef(string chefName) : name(chefName)
{
    cout << "Chef " << name << "konstruktori" << endl;

}

chef::~chef()
{
    cout << "Chef " << name << "destruktori" << endl;

}

void chef::makeSalad()
{
    cout << "Chef " << name << "makes salad" << endl;
}

void chef::makeSoup()
{
    cout << "Chef " << name << "makes soup" << endl;
}
