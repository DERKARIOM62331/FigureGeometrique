#include <iostream>
#include <math.h>
#include "Point.hpp"
using namespace std;
Point::Point(double x , double y)
{
    this->X = x;
    this->Y = y;
}
void Point::Move(double x , double y)
{
    this->X += x;
    this->Y += y;    
}
double Point::Distance(Point B)
{
   return(sqrt((this->X - B.X)*(this->X - B.X) + (this->Y - B.Y)*(this->Y - B.Y)));
}
Point Point::Add(Point B)
{
    Point C(0,0);
    C.X = this->X + B.X;
    C.Y = this->Y + B.Y;
    return C;
}
Point Point::operator+ (Point B)
{
    Point C(0,0);
    C.X = this->X + B.X;
    C.Y = this->Y + B.Y;
    return C;
}
Point Point::operator- (Point B)
{
    Point C(0,0);
    C.X = this->X - B.X;
    C.Y = this->Y - B.Y;
    return C;
}
void Point::Afficher()
{
    cout << "(" << this->X << "," << this->Y << ")" << endl;
}
double Point::GetX()
{
    return(this->X);
}
double Point::GetY()
{
    return(this->Y);
}
void Point::SetX(double x)
{
    this->X = x;
}
void Point::SetY(double y)
{
    this->Y = y;
}
