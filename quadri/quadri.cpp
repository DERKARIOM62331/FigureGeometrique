#include<iostream>
#include "quadri.hpp"
#include "../Point/Point.hpp"
using namespace std;
quadri::quadri(Point x,Point y, Point z, Point w) : Forme(4)  
{
 sommet[0]=x;
  sommet[1]=y;
  sommet[2]=z;
  sommet[3]=w;

}
void quadri::Afficher()
{
  cout << "les quatres pionts sont:\n";
 for(int i=0; i<nbr_sommet; i++)
  sommet[i].Point::Afficher();
}