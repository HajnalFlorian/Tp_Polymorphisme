#include "CCube.h"

string CCube::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Cube";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|- Cube\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tlarheur = "; oss.str(""); oss << m_dbllargeur; strDesc += oss.str() + "\n"; strDesc += "}\n";

	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CCube::toString()
{
	ostringstream oss;
	oss << m_dbllargeur; // mes attributs spécifiques
	return CFigure::toString() + " " + oss.str();
}
