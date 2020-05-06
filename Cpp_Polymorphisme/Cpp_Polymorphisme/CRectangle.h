#pragma once
#include "CFigure.h"
#include <cmath> 
#include <string> 
class CRectangle:public CFigure
{
protected:
	double largeur, longueur;
public:
	CRectangle(double largeur, double longueur, double x = 0, double y = 0) 
		:CFigure(x, y, 0), largeur(largeur), longueur(longueur){}
	~CRectangle() {}
	double premimetre() { return(longueur + largeur) * 2; }
	double aire() { return longueur * largeur; }
	double volume() { return 0;}
	string description(t_desc type);
	string toString(); // redéfinition pour un Carre
};

