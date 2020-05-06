#pragma once
#include <cmath> 
#include <string> 
#include "CCercle.h"
#define PI 3.141592
using namespace std;

class CSphere: public CCercle
{
public:
	CSphere(double rayon, double x=0,double y=0) :CCercle(rayon, x, y){}
	~CSphere(){}
	double perimetre() { return 0; }
	double aire() { return  4* PI * (rayon * rayon); }
	double volume() { return((4 * PI) * (rayon * rayon * rayon)) / 3; }
	string description(t_desc type);
	string toString(); // redéfinition pour un Triangle
};

