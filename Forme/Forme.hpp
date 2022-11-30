#ifndef FORME_HPP
#define FORME_HPP
#include "../Point/Point.hpp"
    class Forme: public Point
    {
        protected:
            int nbr_sommet;
            Point *sommet;
        public:
            Forme(int);
            ~Forme();
            int GetNbSommet();
    };
#endif