#include <iostream>
#include "Point/Point.hpp"
#include "Forme/Forme.hpp"
#include "Triangle/Triangle.hpp"
using namespace std;
int main()
{
    Point A(2,8) , B(8,2) , C(0,0),D(0,0);
    cout << "le point A:";
    A.Afficher();
    cout << "le point B:";
    B.Afficher();
    C = A + B;
    D = A - B;
    cout << "le point C = A + B :";
    C.Afficher();
    cout << "le point D = A - B :";
    D.Afficher();
    cout << "\n\n\n" << endl;
    Triangle t(A,B,C);
    t.Afficher();
    double d=0,a=0,p=0;
    p=t.Perimetre();
    a=t.Aire();
    cout << "\n \tle Perimetre du triangle t est :" << p << " \n\tson Aire est : " << a << endl;
    return 0;
}