#pragma once
#include "Figure.h"


//La classe CRectangle h�rite de la classe CFigure
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

	//mutateurs des donn�es de la classe CRectangle
	int getLarg() const;
	int getLongu() const;
	void setLarg(int La);
	void setLongu(int Lo);

	//Red�finition de la fonction virtuelle pure dessiner
	void dessiner();

	//red�finition de la fonction virtuelle pure aire
	void aire();

	//red�finition de la fonction virtuelle pure perimetre
	void perimetre();
};

