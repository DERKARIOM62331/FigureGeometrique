#include <iostream>
#include "../Forme/Forme.hpp"
#include "../Vecteur/Vecteur.hpp"
#include "Triangle.hpp"
#include "math.h"
using namespace std;

Triangle::Triangle(Point p1,Point p2,Point p3) : Forme(3)
{
    sommet[0]=p1;
    sommet[1]=p2;
    sommet[2]=p3;
}
void Triangle::Afficher()
{
   cout << " \tJe suis un triangle de coordonnées: ";
   for(int i=0 ; i<3 ; i++)
   {
       cout << " (" << sommet[i].GetX() << "," <<  sommet[i].GetY() << ")" ;
       if(i<2)
        cout << "," ;
        else
            cout << endl; 
   }  
}
double Triangle::Perimetre()
{
    double p;
    p=(sommet[0].Distance(sommet[1])+sommet[1].Distance(sommet[2]) + sommet[0].Distance(sommet[2]))/2;
    return p;
}
double Triangle::Aire()
{
    double p,a;
    p=Perimetre();
    a=p*(p-(sommet[0].Distance(sommet[1])))*(p-(sommet[0].Distance(sommet[2])))*(p-(sommet[1].Distance(sommet[2])));
    return sqrt(a);
}
Triangle Triangle::Translation(Vecteur v1)
{
    Point A(0,0),B(0,0),C(0,0),D(0,0);
    D=v1.Milieu();
    A.SetX(sommet[0].GetX()+v1.sommet[0].GetX());
    A.SetY(sommet[0].GetY()+v1.sommet[0].GetY());
    B.SetX(sommet[1].GetX()+D.GetX());
    B.SetY(sommet[1].GetY()+D.GetY());
    C.SetX(sommet[2].GetX()+v1.sommet[1].GetX());
    C.SetY(sommet[2].GetY()+v1.sommet[1].GetY());
    Triangle T(C,B,A);
    return T;   
} 