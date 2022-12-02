#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "../Forme/Forme.hpp"
    class Triangle : public Forme
    {
        public:
            Triangle( Point, Point, Point);
            double Aire();
            void Afficher();
            double Perimetre();
    };
#endif