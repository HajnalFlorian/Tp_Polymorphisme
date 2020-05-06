#pragma once
#include <cmath> 
#include <string> 
#include"CFigure.h"
#define PI 3.141592
using namespace std;

class CCercle:public CFigure
{
protected:
	double rayon;
public:
	CCercle(double rayon, double x=0, double y=0)
		:CFigure(x,y,0),rayon(rayon){}
	~CCercle(){}
	double perimetre() { return 2 * PI * rayon; }
	double aire() { return (rayon * rayon) * PI; }
	double volume() { return 0; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Triangle
};

