#include <iostream>
#include <stdlib.h>
#include "Forme.hpp"
using namespace std;
Forme::Forme(int n)
{
    nbr_sommet = n;
    sommet = new Point[n];
}
Forme::~Forme()
{
    free(sommet);
}
int Forme::GetNbSommet()
{
    return nbr_sommet;
}