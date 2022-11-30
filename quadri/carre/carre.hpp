#ifndef CARRE_H
#define CARRE_H
class carre:public quadri
{
  point *a;
  point *b;
   public:
    carre(point *,point *);
    float longueur();
    void affichag();
};
#endif