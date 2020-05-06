#pragma once
#include"CRectangle.h"
#include<math.h>
#include<string>

using namespace std;

class CParallelepipede:public CRectangle
{
protected:
	double hauteur, dx, dy;
public:
	CParallelepipede(double hauteur, double longueur, double largeur, double x=0, double y=0)
		:CRectangle(largeur, longueur,x,y),hauteur(hauteur),dx(x),dy(y){}
	~CParallelepipede(){}
	double perimetre() { return 0; }
	double aire() { return(2 * hauteur * longueur) + (2 * hauteur * largeur) + (2 * longueur * largeur); }
	double volume() { return longueur * largeur * hauteur; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Carre

};