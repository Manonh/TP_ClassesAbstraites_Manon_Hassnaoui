#include "Carre.h"
#include <iostream>

using namespace std;

CCarre::~CCarre()
{
}

//mutateurs de la classe carre
//cette m�thoe r�cup�re la valeur d'un bord de carre
int CCarre::getBord() const
{
	return getLongu();
}

//Cette m�thode utilise les m�thode de la classe m�re rectangle
//pour setter les bords � la m�me valeur et ainsi respecter 
//la definition du carre.
void CCarre::setBord(int bord)
{
	setLarg(bord);
	setLongu(bord);
}


//impl�mentation de la m�thode dessiner pour le carre en utilisant de getBord()
void CCarre::dessiner()
{
	cout << "Je suis un carre de cote: " << getBord() << endl;
	cout << "Mes coordonn�es sont: " << this->Getm_x() << " " << this->Getm_y() << endl;
	aire();
	perimetre();
}

//impl�mentation de la m�thode aire pour le carre en utilisant de getBord()
void CCarre::aire()
{
	cout << "Je suis un carre d'aire: " << getBord()*getBord() << endl;
}

//impl�mentation de la m�thode perimetre pour le carre en utilisant de getBord()
void CCarre::perimetre()
{
	cout << "Je suis un carre de perimetre: " << (getBord() + getBord()) * 2 << endl;
}



