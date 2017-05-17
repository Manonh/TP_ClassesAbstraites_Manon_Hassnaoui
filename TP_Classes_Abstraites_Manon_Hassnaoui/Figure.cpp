#include "Figure.h"
#include <iostream>

using namespace std;



//Implémentation des méthodes mutateurs de m_x et m_y
int CFigure::Getm_x() const
{
	return this->m_x;
}

int CFigure::Getm_y() const
{
	return this->m_y;
}

void CFigure::Setm_x(int x)
{
	this->m_x = x;
}

void CFigure::Setm_y(int y)
{
	this->m_y = y;
}

