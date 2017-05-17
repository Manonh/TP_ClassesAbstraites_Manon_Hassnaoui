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

	//mutateur de la donnée m_radius
	int getRadius()const;
	void setRadius(int Ra);

	//Redéfinition de la fonction virtuelle pure dessiner
	void dessiner();

	//redéfinition de la fonction virtuelle pure aire
	void aire();

	//redéfinition de la fonction virtuelle pure perimetre
	void perimetre();
};

