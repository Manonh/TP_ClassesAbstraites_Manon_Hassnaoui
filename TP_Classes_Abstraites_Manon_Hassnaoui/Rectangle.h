#pragma once
#include "Figure.h"


//La classe CRectangle hérite de la classe CFigure
class CRectangle : public CFigure
{
	int m_largeur;
	int m_longueur;

public:

	//constructeur de CRectangle
	CRectangle (int larg, int longu, int abs, int ord) :CFigure(abs,ord)
	{
		
		//Setm_x(abs);
		//Setm_y(ord);
		m_largeur = larg;
		m_longueur = longu; 
	}

	//destructeur de CRectangle
	~CRectangle();

	//mutateurs des données de la classe CRectangle
	int getLarg() const;
	int getLongu() const;
	void setLarg(int La);
	void setLongu(int Lo);

	//Redéfinition de la fonction virtuelle pure dessiner
	void dessiner();

	//redéfinition de la fonction virtuelle pure aire
	void aire();

	//redéfinition de la fonction virtuelle pure perimetre
	void perimetre();
};

