#include <iostream>
#include <stdlib.h>
#include "Forme.hpp"
using namespace std;
Forme::Forme(int n)
{
    nbr_sommet = n;
    sommet = (Point*)malloc(sizeof(Point)*nbr_sommet);
}
Forme::~Forme()
{
    free(sommet);
}
int Forme::GetNbSommet()
{
    return nbr_sommet;
}