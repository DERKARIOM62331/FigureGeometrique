#ifndef POINT_HPP
#define POINT_HPP
    class Point
    {
        protected:
            double X;
            double Y;
        public:
            Point(double x=0,double y=0);
            void Move(double,double);
            double Distance(Point);
            Point Add(Point);
            Point operator+ (Point);
            Point operator- (Point);
            virtual void Afficher();
            double GetX();
            double GetY();
            void SetX(double);
            void SetY(double);
    };
#endif