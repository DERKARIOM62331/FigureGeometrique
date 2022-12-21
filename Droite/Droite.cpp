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
	return( (B.Y-A.Y)/(B.X-A.X) == (C.Y-A.Y)/(C.X-A.X));
}
int Droite::SontDroitesParalleles(Droite D2)
{
	if(SontSurMemeDroite(A,B,D2.A)&&SontSurMemeDroite(A,B,D2.B)
		return 1;
		else{
		int t=0;
		for(Point i=A;i<=B;i++)
		{
		for(Point j=D2.A;j<=D2.B;j++)
		{
		 if(SontSurMemeDroite(A,B,i)&&SontSurMemeDroite(D2.A,D2.B,i))
		 t++;
		}
		}
		if(t>0)
			return 0;
		else{
			Point E(D2.A.X,B.Y);
			Point F(D2.B.X,A.Y);
			if(A.Distance(F)==B.Distance(E))
			return 1;
			else
				return 0;
		}
	}
}


		

