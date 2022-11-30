#include <iostream>
#include "Point/Point.hpp"
#include "quadri/quadri.hpp"
using namespace std;
int main()
{
  Point o(2,3),n(1,6), v(3,2), g(5,9);
  quadri f(o,n,v,g);
    f.Afficher();
    return 0;
}