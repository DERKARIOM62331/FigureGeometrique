#include<iostream>
#include "rectangle.hpp"
#include <cmath>

using namespace std;
rectangle::rectangle(Point *x,Point *y):
{
  this->A=x;
  this->B=y;
}
float rectangle::getlongueur()
{
   float a,b,c,long;
   a=B->GetX()-A->GetX();
   b=B->GetY()-A->GetY();
   c=a*a+b*b;
   long=sqrt(c);
   return long;
}
float rectangle::getlargueur()
{
  float a,b,c,larg;
   a=B->GetX()-A->GetX();
   b=B->GetY()-A->GetY();
   c=a*a+b*b;
   long=sqrt(c);
   return larg;
}
float rectangle::perimetre()
{
  rectangle R;
  return (2*(R.longueur()+R.largeur()));
}
float rectangle::aire()
{
  rectangle R;
 float P;
  p=R.longueur()*R.largueur();
  return p;
}
void rectangle::deplacer(point *L, point *l)
{
    this->A +=L;
    this->B +=l;
}
void rectangle::affichage()
{
  rectangle R;
  cout<<"longueur"<<R.getlongueur()<<"\t"<<"largueur "<<R.getlargeur();
}