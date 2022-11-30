#include<iostream>
#include "../quadri/quadri.hpp"
#include "carre.hpp"
using namespace std;
carre::carre(point *A, point *B)
{
 this->a=A;
 this->b=B;
}
float carre::longueur()
{
  float X,Y,s,r;
   X=B->GetX()-A->GetX();
   Y=B->GetY()-A->GetY();
   s=X*X+Y*Y;
   r=sqrt(s);
   return r;
}
void carre::affichag()
{
  carre T;
    afficher();
  cout<<"le longueur est: "<<T.longueur()<<"\n";
}
float carre::perimetre()
{
  carre T;
  return(T.longueur()*4);
}
float carre::aire()
{
  carre T;
 return (T.longueur*longueur);
}
