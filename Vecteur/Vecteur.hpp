#ifndef VECTEUR_HPP
#define VECTEUR_HPP
#include "../Forme/Forme.hpp"
class Vecteur : public Forme
{
    Point p1;
    Point p2;
    public:
        Vecteur(Point,Point);
        void Afficher();
        ~Vecteur();
        Point Milieu();
        friend class Triangle;
};
#endif
