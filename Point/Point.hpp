#ifndef POINT_HPP
#define POINT_HPP
    class Point
    {
        protected:
            double X;
            double Y;
        public:
            Point(double,double);
            void Move(double,double);
            double Distance(Point);
            Point Add(Point);
            Point operator+ (Point);
            void Afficher();
            double GetX();
            double GetY();
            void SetX(double);
            void SetY(double);
    };
#endif