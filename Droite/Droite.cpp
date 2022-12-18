#include<iostream>
#include "Droite.hpp"
using namespace std;
Droite::Droite(Point A,Point B):Forme(2)
{
	sommet[0]=A;
	sommet[1]=B;
}
int Droite::SontSurMemeDroite(Point A,Point B,Point C)
{
	return( (B.y-A.y)/(B.x-A.x) == (C.y-A.y)/(C.x-A.x));
}
int Droite::SontDroitesParalleles(Droite D1,Droite D2)
{
	if(SontSurMemeDroite(D1.A,D1.B,D2.A)&&SontSurMemeDroite(D1.A,D1.B,D2.B)
		return 1;
		else{
		for(Point i=D1.A;i<=D1.B;i++)
		{
		for(Point j=D2.A;j<=D2.B;j++)
		{
		 int t=0;
		 if(SontSurMemeDroite(D1.A,D1.B,i)&&SontSurMemeDroite(D2.A,D2.B,i))
		 t++;
		}
		}
		if(t>0)
			return 0;
		else{
			Point E(D2.A.x,D1.B.y);
			Point F(D2.B.x,D1.A.y);
			if(D1.A.Distance(F)==D1.B.Distance(E))
			return 1;
			else
				return 0;
		}
	}
}


		

