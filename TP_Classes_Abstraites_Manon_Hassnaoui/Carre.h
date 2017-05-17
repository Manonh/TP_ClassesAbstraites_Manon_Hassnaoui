#pragma once
#include "Rectangle.h"

class CCarre : protected CRectangle
{

public:
	CCarre (int abs = 0, int ord = 0, int longu = 0) : CRectangle(abs, ord, longu, longu)
	{

	}

	~CCarre();

	//Redéfinition de la fonction virtuelle pure dessiner pour le carre
	void dessiner();

	//redéfinition de la fonction virtuelle pure aire pour le carre
	void aire();

	//redéfinition de la fonction virtuelle pure perimetre pour le carre
	void perimetre();

	int getBord() const;
	void setBord(int bord);
};

