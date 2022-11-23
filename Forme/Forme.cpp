#include <iostream>
#include "Forme.hpp"
using namespace std;

Forme::Forme(int n)
{
    tab= new Point(n);
}
Forme::~Forme()
{
    delete tab;
}