#include <iostream>
#include "../Forme/Forme.hpp"
#include "Triangle.hpp"
#include "math.h"
using namespace std;

Triangle::Triangle(Point p1,Point p2,Point p3):Forme(3)
{
    //   sommet[0]=p1;
    //    sommet[1]=p2;
    //  sommet[2]=p2;
    this->p1=p1;
    this->p2=p2;
    this->p3=p3;
     
}
void Triangle::Afficher()
{
   cout << " \tJe suis untriangle de coordonnées: ";
    cout << " (" << p1.GetX() << "," <<  p1.GetY() << ")," ; 
    cout << "(" << p2.GetX() << "," <<  p2.GetY() << ")," ;
    cout << "(" << p3.GetX() << "," <<  p3.GetY() << ")" << endl; 
}
double Triangle::Perimetre()
{
    double p;
    p=(p1.Distance(p2)+p2.Distance(p3)+p1.Distance(p3))/2;
    return p;
}

double Triangle::Aire()
{
    double p,a;
    p=Perimetre();
    a=p*(p-(p1.Distance(p2)))*(p-(p1.Distance(p3)))*(p-(p2.Distance(p3)));
    return sqrt(a);
}