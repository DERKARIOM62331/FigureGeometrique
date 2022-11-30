#include <iostream>
#include "Point/Point.hpp"
#include "Quadri/Quadri.hpp"
using namespace std;
using namespace std;
int main()
{
  Point o(1,4),n(4,4), v(1,1), g(4,1);
  Quadri Q(o,n,v,g);
  Q.Afficher();
  if(Q.est_carre())
    cout << "oui\n";  
  else
    cout << "non\n";
  return 0;
}