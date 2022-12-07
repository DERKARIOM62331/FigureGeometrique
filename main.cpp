#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include "Point/Point.hpp"
#include "Forme/Forme.hpp"
#include "Triangle/Triangle.hpp"
#include "Vecteur/Vecteur.hpp"
#include "Cercle/Cercle.hpp"
#include "Quadri/Quadri.hpp"
using namespace std;
int main()
{
    int ch;
    cout << "\t######\t*****  GESTION DES FIGURES GEOMETRIQUES  *****\t######" << endl;
    cout << "1 . Operation sur les Points" << endl;
    cout << "2 . Operation sur les Triangles" << endl;
    cout << "3 . Operation sur les Cercles" << endl;
    cout << "4 . Operation sur les Vecteurs" << endl;
    cout << "5 . Operation sur les Quadilateres" << endl;
    cout << "6 . Pour Quitter le programme" << endl;
    cout << " . " << endl;
    cout << "\nChoix : " << endl;
    cin >> ch;
    switch(ch)
    {
        double a,b,c,d,e,f,g,h; 
        //char v;
        cout << "Vous allez les coordonnées de quatres(4) points" << endl;
        cout << "Le 1er point : " ; cin >> a >> b;
        Point A(a,b);
        cout << "Le 2e point : " ; cin >> c >> d;
        Point B(c,d);
        cout << "Le 3e point : " ; cin >> e >> f;
        Point C(e,f);
        cout << "Le 4e point : " ; cin >> g >> h;
        Point D(g,h);
        Triangle T(A,B,C);
        Cercle C1(A,B);
        Vecteur V1(A,B),V2(C,D);
        case 1:// point

            int ch1;
            cout << "1 . Additionner des points " << endl;
            cout << "2 . Afficher un point " << endl;
            cout << "3 . Soustraire des points" << endl;
            cout << "4 . Deplacer un point " << endl;
            cout << "5 . Afficher la distance entre deux points " << endl;
            cout << "6 . Pour retourner au menu principal " << endl;
            cout << "Votre choix : "; cin >> ch1;
            switch(ch1)
            {
                case 1:
                    Point I(0,0);
                    I=A+B;
                    cout << "\tLa somme de A et B est :" ; I.Afficher(); 
                    I=A+B+C;
                    cout << "\tLa somme de A,, B et C est :" ; I.Afficher();
                    break;
                case 2:
                    int q;
                    A.Afficher();
                    cout << " Voulez-vous afficher les autres points? " << endl;
                    cin >> q;
                    if(q==1)
                    {
                        B.Afficher();
                        C.Afficher();
                        D.Afficher();
                    }
                    break;
                case 3:
                    Point V(0,0),W(0,0);
                    V=A-B; W=A-B-C;
                    cout << "La soustraction des deux 1er point est: " ; V.Afficher();
                    cout << "La soustraction des trois 1er points est: " ; W.Afficher();
                    break;
                case 4:
                    static double dx,dy;
                    cout << "\nVeuillez saisir la valeur de x et y qu'il faut augmenter aux anciens :" ;
                    cin >> dx >> dy ;
                    cout << "\t\t Le premier point avant deplacement " << endl;
                    A.Afficher() ;
                    A.Move(dx,dy);
                    cout << "\t\t Le premier point aprés deplacement " << endl;
                    break;
                case 5:
                    double a,b;
                    a=A.Distance(B); b=C.Distance(D);
                    cout << "\n La distance entre les deux premiers points est : " << a << endl;
                    cout << "\n La distance entre les deux derniers points est : " << b << endl;
                    break;
                case 6:
                    
                    break;
                default: cout << "\n\tOption invalide !!!" << endl;
            break;
            }
        case 2:// triangle
            int ch2;
            cout << "1 . Afficher un triangle " << endl;
            cout << "2 . Afficher le perimetre d'un triangle " << endl;
            cout << "3 . Afficher l'aire d'un triangle " << endl;
            cout << "4 . Faire la translation d'un triangle " << endl;
            cout << "5 . Pour retourner au menu principal " << endl;
            // cout << "7 .  " << endl;
            // cout << "8 .  " << endl;
            // cout << "9 .  " << endl;
            // cout << "\n\tVotre choix : ";
            cin >> ch2;
            switch(ch2)
            {
                case 1:
                    T.Afficher();
                    break;
                case 2:
                    double c=T.Perimetre();
                    cout << "\n Le perimetre du triangle (A,B,C) est : " << c << endl;
                    break;
                case 3:
                    double d=T.Aire();
                    cout << "\n L'aire' du triangle (A,B,C) est : " << d << endl;
                    break;
                case 4:
                    double a,b,c,d;
                    cout << "Veuillez saisir les coordonnées du vecteur : " <<endl;
                    cout << "\t1er point : " ; cin >> a >> b;
                    cout << "\t2e point : " ; cin >> c >> d ;
                    Point V1(a,b),V2(c,d);
                    Vecteur V(V1,V2);
                    T.Translation(V);
                    cout << "\tLe triangle (A,B,C) apres translation est : " << endl;
                    T.Afficher();
                    break;
                case 5:
                    break;
                default: cout << "\n\tOption invalide !!!" << endl;
                  break;
            }
            break;
        case 3:// cercle
            int ch3;
            cout << "1 . Afficher le cercle " << endl;
            cout << "2 . Afficher l'aire du cercle " << endl;
            cout << "1 . Afficher le perimetre du cercle " << endl;
            cout << "2 . Afficher un cercle " << endl;
            cout << "3 . Pour retourner au menu principal " << endl;
            cin >> ch3;
            switch(ch3)
            {
                case 1:
                    C.Afficher();
                    break;
                case 2:
                    double c=C1.Aire() ;
                    cout << "L'aire du cercle est : " << c << endl;
                    break;
                case 3:
                    double d=C1.Perimetre();
                    cout << "Le perimetre du cercle est : " << d << endl;
                    break;
                default: cout << "\n\tOption invalide !!!" << endl;
                break;
            }
            break;
        case 4:// vecteur
            int ch4;
            cout << "1 . Afficher un vecteur " << endl;
            cout << "2 .  " << endl;
            cout << "3 . Additionner deux vecteurs " << endl;
            cout << "4 . Soustraire deux vecteurs" << endl;
            cout << "5 . Deplacer un vecteur " << endl;
            cout << "6 . Pour retourner au menu principal " << endl;
            cin >> ch4;
            switch(ch4)
            {
                case 1:
                    cout << "\tVecteur V1(A,B) : " << endl;
                    V1.Afficher();
                    cout << "\tVecteur V2(C,D) : " << endl;
                    V2.Afficher();
                    break;
                // case 2:
                //     Vecteur VC(A,B);
                //     VC=V1+V2;
                //     cout << "La somme des deux vecteurs V1 et v2 est : " ; 
                //     VC.Afficher();
                //     break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:

                    break;
                case 6:

                    break;
                default: cout << "\n\tOption invalide !!!" << endl;
                    break;
            }
        case 5:// Quadri
            cout << "1 . Creation d'un quadrilatère " << endl;
            cout << "2 . Afficher un quadrilatère " << endl;
            cout << "3 . Additionner deux quadrilatères " << endl;
            cout << "4 . Pour retourner au menu principal " << endl;
            break;
        case 6:
            // Pour retourner
            break;
        default: 
            cout << "\n\tOption invalide !!!" << endl;
            break;
    }

    return 0;
}