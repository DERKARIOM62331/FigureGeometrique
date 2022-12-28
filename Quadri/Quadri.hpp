#ifndef QUADRI_HPP
#define QUADRI_HPP
#include "../Forme/Forme.hpp"
class Quadri:public Forme
{
     public:
     Quadri(Point,Point,Point,Point);
     void Afficher();
     bool est_carre();
};
#endif
