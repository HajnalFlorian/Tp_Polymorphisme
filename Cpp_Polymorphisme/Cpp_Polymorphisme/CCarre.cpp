#include "CCarre.h"
#include <sstream>
using namespace std;
string CCarre::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Carré";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|- Carre\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tlargeur = "; oss.str(""); oss << m_dbllargeur; strDesc += oss.str() + "\n"; strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}
string CCarre::toString()
{
	ostringstream oss;
	oss << m_dbllargeur; // moi, j’ai une largeur en plus des attributs d’une Figure
	return CFigure::toString() + " " + oss.str();
}