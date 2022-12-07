#include <iostream>
#include "Vecteur.hpp"
#include "../Forme/Forme.hpp"
using namespace std;
Vecteur::Vecteur(Point p,Point t) : Forme(2)
{
    sommet[0]=p;
    sommet[1]=t;
}
Vecteur::~Vecteur()
{
    // for(int i=0;i<2;i++)
    // {
    cout << "Destruction de " << this <<endl;
    //     delete sommet[i];
    // }
}
void Vecteur::Afficher()
{
    cout << "Vecteur de coordonnées : " ;
    for(int i=0;i<2;i++)
    {
        cout <<"(" << sommet[i].GetX() << "," << sommet[i].GetY() << ")" ;
        if(i<1)
            cout << "," ;
        else
            cout <<  endl;
    }   
}
Point Vecteur::Milieu()
{
    Point p(0,0);
    p.SetX((sommet[0].GetX()+sommet[1].GetX())/2);
    p.SetY((sommet[0].GetY()+sommet[1].GetY())/2);
    return p;
}
