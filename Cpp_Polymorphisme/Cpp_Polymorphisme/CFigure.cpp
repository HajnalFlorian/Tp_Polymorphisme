#include "CFigure.h"



string CFigure::toString()
{
	ostringstream oss;
	oss << m_dblx << " " << m_dbly << " " << m_dblz; // mes attributs sous forme de string
	return oss.str();
}
