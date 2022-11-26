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
            virtual void Affichage()=0;
            virtual double Prerimetre()=0;
            virtual double Aire()=0;
            int GetNbSommet();
    };
#endif