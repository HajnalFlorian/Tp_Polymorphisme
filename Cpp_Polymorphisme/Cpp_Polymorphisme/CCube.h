#pragma once
#include <cmath> 
#include <string>
#include "CCarre.h"

using namespace std;

class CCube:public CCarre
{
public:
	CCube(double m_dbllargeur, double x = 0, double y = 0)
		:CCarre(m_dbllargeur,x,y){}
	~CCube(){}
	double perimetre() { return 0; }
	double aire() { return  6*(m_dbllargeur*m_dbllargeur); }
	double volume() { return m_dbllargeur*m_dbllargeur*m_dbllargeur; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Triangle
};

