#pragma once
#include <cmath> 
#include <string> 
#include"CFigure.h"
using namespace std;
class CTriangle : public CFigure
{
protected:
	double m_dblbase, m_dblhauteur; // les propriétés spécifiques d’un Triangle
public:
	CTriangle(double base, double hauteur, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur) {}
	~CTriangle() {}
	double perimetre() { return sqrt(m_dblbase * m_dblbase + m_dblhauteur * m_dblhauteur) + m_dblbase + m_dblhauteur; }
	double aire() { return m_dblbase * m_dblhauteur / 2; }
	double volume() { return 0; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Triangle
};