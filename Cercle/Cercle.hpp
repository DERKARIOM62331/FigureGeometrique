#ifndef CERCLE_HPP
#define CERCLE_HPP
#include "../Forme/Forme.hpp"
class Cercle : public Forme
{
    double Rayon;
    public:
        Cercle(Point,Point);
        double Aire(); // PI*R*R
        double Perimetre(); // D*PI || 2*PI*R
        void Afficher();
        double GetRayon();
        void SetRayon(double);
};
#endif
