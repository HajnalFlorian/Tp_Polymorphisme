#include <exception> 
#include <iomanip> 
#include <list> 
#include <fstream>
#include <iostream>
using namespace std;

#include "CFigure.h"
#include "CTriangle.h"
#include "CCarre.h"
#include "CCercle.h"
#include "CCube.h"
#include "CParallelepipede.h"
#include "CRectangle.h"
#include "CSphere.h"

void afficherInfos(const CFigure& f);

int main()
{
    cout << endl;
    CTriangle triangle(5, 8);
    cout << "Je suis un " << triangle.description(courte) << endl; cout << triangle.description(longue);
    cout << "Perimetre = " << triangle.perimetre() << endl; cout << "Aire = " << triangle.aire() << endl;
    cout << "Volume = " << triangle.volume() << endl << endl;
    CCarre carre(4); // largeur
    //cout << "Carre :" << endl;
    cout << "Je suis un " << carre.description(courte) << endl; cout << carre.description(longue);
    cout << "Périmetre = " << carre.perimetre() << endl; cout << "Aire = " << carre.aire() << endl;
    cout << "Volume = " << carre.volume() << endl << endl;
    CRectangle rectangle(5, 4); // largeur, longueur
    //cout << "Rectangle : " << endl;
    cout << "Périmetre = " << rectangle.perimetre() << endl; cout << "Aire = " << rectangle.aire() << endl;
    cout << "Volume = " << rectangle.volume() << endl << endl;
    CCercle cercle(2); // rayon
    //cout << "Cercle : " << endl;
    cout << "Périmetre = " << cercle.perimetre() << endl; cout << "Aire = " << cercle.aire() << endl;
    cout << "Volume = " << cercle.volume() << endl << endl;
    CCube cube(6); // largeur
    //cout << "Cube : " << endl;
    cout << "Périmetre = " << cube.perimetre() << endl; cout << "Aire = " << cube.aire() << endl;
    cout << "Volume = " << cube.volume() << endl << endl;
    CParallelepipede parallelepipede(5, 4, 9); // largeur, longueur, hauteur
    //cout << "Parallelepipede : " << endl;
    cout << "Périmetre = " << parallelepipede.perimetre() << endl; cout << "Aire = " << parallelepipede.aire() << endl;
    cout << "Volume = " << parallelepipede.volume() << endl << endl;
    CSphere sphere(3); // rayon
    //cout << "Sphere : " << endl;
    cout << "Périmetre = " << sphere.perimetre() << endl; cout << "Aire = " << sphere.aire() << endl;
    cout << "Volume = " << sphere.volume() << endl << endl;
    CFigure* fig; 
    list<CFigure*> liste;
    list<CFigure*>::iterator iL; 
    fstream* fichier = NULL; 
    string strFigure;
    int n_x, n_y, n_z;
    double dbl_base, dbl_hauteur, dbl_largeur, dbl_longueur, dbl_rayon, dx, dy;
    liste.push_back(&triangle);
    liste.push_back(&carre); 
    liste.push_back(&rectangle);
    liste.push_back(&cercle); 
    liste.push_back(&cube); 
    liste.push_back(&parallelepipede); 
    liste.push_back(&sphere);
    fichier = new fstream("Figures.txt", fstream::out);
    for (iL = liste.begin(); iL != liste.end(); iL++)
    {
        fig = *iL;
        *fichier << fig->description(courte) << " " << fig->toString() << endl;
    }
    fichier->close();
    delete fichier;
    fichier = new fstream("Figures.txt", fstream::in);
    *fichier >> strFigure;
    while (!fichier->eof()){

        *fichier >> n_x >> n_y >> n_z; cout << strFigure;
        cout << " " << n_x << " " << n_y << " " << n_z;

        if (strFigure == "Figure")
        cout << endl;

        if (strFigure == "Triangle")
        {
            *fichier >> dbl_base >> dbl_hauteur;
            cout << " " << dbl_base << " " << dbl_hauteur << endl;
        }
        if (strFigure == "Carré")
        {
            *fichier >> dbl_largeur;
            cout << " " << dbl_largeur << endl;
        }
        if (strFigure == "Rectangle")
        {
            *fichier >> dbl_largeur >> dbl_longueur; cout << dbl_largeur << dbl_longueur << endl;
        }
        if (strFigure == "Cercle")
        {
            *fichier >> dbl_rayon; cout << dbl_rayon << endl;
        }
        if (strFigure == "Cube")
        {
            *fichier >> dbl_largeur; cout << dbl_largeur << endl;
        }
        if (strFigure == "Parallélépipède")
        {
            *fichier >> dbl_largeur >> dbl_longueur >> dbl_hauteur >> dx >> dy;
            cout << dbl_largeur << dbl_longueur << dbl_hauteur << dx << dy << endl;
        }
        if (strFigure == "Sphère")
        {
            *fichier >> dbl_rayon; cout << dbl_rayon << endl;
        }
        while (fichier->get() != '\n');
        *fichier >> strFigure;
    }
fichier->close();
delete fichier;
return 0;
}

void afficherInfos(const CFigure& f)
{
   // cout << "Je suis un " << f.description() << endl;
   // cout << "Mes attributs sont : " << " " << f.toString() << endl;
}

