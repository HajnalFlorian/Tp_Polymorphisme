#include "CSphere.h"

string CSphere::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Sphere";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|- Sphere\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\trayon = "; oss.str(""); oss << rayon; strDesc += oss.str() + "\n"; strDesc += "}\n";

	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CSphere::toString()
{
	ostringstream oss;
	oss << rayon; // mes attributs spécifiques
	return CFigure::toString() + " " + oss.str();
}
