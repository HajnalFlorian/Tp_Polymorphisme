#pragma once
#include <cmath> 
#include <string> 
#include "CFigure.h"
using namespace std;

class CCarre : public CFigure
{
protected:
	double m_dbllargeur; // une propriété spécifique aux carrés
public:
	CCarre(double largeur, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dbllargeur(largeur) {}
	~CCarre() {}
	double perimetre() { return m_dbllargeur * 4; } 
	double aire() { return m_dbllargeur * m_dbllargeur; }
	double volume() { return 0; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Carre
};

