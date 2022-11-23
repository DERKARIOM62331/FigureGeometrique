#ifndef FORME_HPP
#define FORME_HPP
#include "../Point/Point.hpp"
    class Forme: public Point
    {
        protected:
            int sommet;
            Point *tab;
        public:
            Forme(int);
            ~Forme();
            virtual void Affichage()=0;

    };
#endif