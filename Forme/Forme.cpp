#include <iostream>
#include <stdlib.h>
#include "Forme.hpp"
using namespace std;
Forme::Forme(int n)
{
    sommet = (Point*)malloc(sizeof(Point)*n);
}
Forme::~Forme()
{
    free(sommet);
}
int Forme::GetNbSommet()
{
    return nbr_sommet;
}