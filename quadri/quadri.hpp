#ifndef QUADRI_HPP
#define QUADRI_HPP
#include "../Forme/Forme.hpp"
class quadri:public Forme
{
     public:
      quadri(Point,Point,Point,Point);
       void Afficher();
};
#endif