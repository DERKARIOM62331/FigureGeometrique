//Dans tout ce Programme, Une Droite est supposé Comme un Segment (c-a-d Deux Points)
#ifndef DROITE_HPP
#define DROITE_HPP
#include "../Forme/Forme.hpp"
class Droite : public Forme
{
	public:
		Droite(Point,Point);
		int SontSurMemeDroite(Point,Point,Point);
		int SontDroitesParalleles(Droite);
};
#endif
