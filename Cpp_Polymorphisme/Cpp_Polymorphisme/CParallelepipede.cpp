#include "CParallelepipede.h"

string CParallelepipede::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Parallelepipede";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|- Parallelepipede\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tlongueur = "; oss.str(""); oss << longueur; strDesc += oss.str() + "\n";
		strDesc += "\tlargeur = "; oss.str(""); oss << largeur; strDesc += oss.str() + "\n"; strDesc += "}\n";
		strDesc += "\thauteur = "; oss.str(""); oss << hauteur; strDesc += oss.str() + "\n"; strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CParallelepipede::toString()
{
	ostringstream oss;
	oss << longueur << " " << largeur << " "<<hauteur; // mes attributs spécifiques
	return CFigure::toString() + " " + oss.str();
}
