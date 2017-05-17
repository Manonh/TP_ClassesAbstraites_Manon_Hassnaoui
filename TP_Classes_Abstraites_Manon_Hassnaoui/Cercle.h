#pragma once
#include "Figure.h"

class CCercle : public CFigure
{
	int m_radius;
public:
	//constructeur de la classe CCercle
	CCercle(int radius, int abs, int ord) : CFigure (abs, ord)
	{
		m_radius = radius;
	}

	//destructeur de la classe CCercle
	~CCercle();

	//mutateur de la donn�e m_radius
	int getRadius()const;
	void setRadius(int Ra);

	//Red�finition de la fonction virtuelle pure dessiner
	void dessiner();

	//red�finition de la fonction virtuelle pure aire
	void aire();

	//red�finition de la fonction virtuelle pure perimetre
	void perimetre();
};

