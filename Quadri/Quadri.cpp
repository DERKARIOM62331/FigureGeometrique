#include<iostream>
#include "Quadri.hpp"
#include "../Point/Point.hpp"
using namespace std;
Quadri::Quadri(Point x,Point y, Point z, Point w) : Forme(4)  
{
  sommet[0]=x;
  sommet[1]=y;
  sommet[2]=z;
  sommet[3]=w;

}
void Quadri::Afficher()
{
  cout << "les quatres pionts sont:\n";
 for(int i=0; i<nbr_sommet; i++)
  sommet[i].Point::Afficher();
}
bool Quadri::est_carre()
{
  if(sommet[0].Distance(sommet[1]) == sommet[0].Distance(sommet[3]))
    return true;
  return false; 
}