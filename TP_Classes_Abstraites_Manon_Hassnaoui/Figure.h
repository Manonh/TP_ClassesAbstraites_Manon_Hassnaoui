#pragma once

//Ecrire une classe abstraite CFigure
class CFigure
{
	int m_x, m_y;
public:

	//constructeur
	CFigure(int abs, int ord) {
		m_x = abs;
		m_y = ord;
	}


	//mutateurs de m_x et m_y
	int Getm_x() const;
	int Getm_y() const;
	void Setm_x(int x);
	void Setm_y(int y);

	//fonction virtuelle pure de dessiner
	virtual void dessiner() = 0;

	//fonction virtuelle pure de aire
	virtual void aire() = 0;

	//fonction virtuelle pure de périmètre
	virtual void perimetre() = 0;


};


