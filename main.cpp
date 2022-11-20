#include <iostream>
#include "Point/Point.hpp"
int main()
{
    Point A(2,8) , B(8,2) , C(0,0);
    C = A + B;
    A = A - B;
    C.Afficher();
    A.Afficher();
    return 0;
}