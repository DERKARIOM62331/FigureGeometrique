#include <iostream>
#include "Cercle.hpp"
#include "../Forme/Forme.hpp"
using namespace std;

Cercle::Cercle(Point p1,Point p2) : Forme(2)
{
    sommet[0] = p1;
    sommet[1] = p2;
    Rayon=p1.Distance(p2);
}
double Cercle::Aire() // PI*R*R
{
    double a;
    a= 3.14 * Rayon * Rayon;
    return a;
}
double Cercle::Perimetre() // D*PI || 2*PI*R
{
    double p;
    p= 2* 3.14 * Rayon ;
    return p;
}
void Cercle::Afficher()
{
    cout << "Cercle de centre : (" << sommet[0].GetX() << "," << sommet[0].GetY() << ") et de rayon R=" << GetRayon() << endl;
}
double Cercle::GetRayon()
{
    return Rayon;
}
void Cercle::SetRayon(double r)
{
    Rayon = r ;
}