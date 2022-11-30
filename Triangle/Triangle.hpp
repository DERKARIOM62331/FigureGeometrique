#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
    class Triangle : public Forme
    {
        Point p1;
        Point p2;
        Point p3;
        public:
            Triangle( Point, Point, Point);
            double Aire();
            void Afficher();
            double Perimetre();
    };
#endif