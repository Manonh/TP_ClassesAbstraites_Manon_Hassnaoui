#include "Carre.h"
#include <iostream>

using namespace std;

CCarre::~CCarre()
{
}

//mutateurs de la classe carre
//cette méthoe récupère la valeur d'un bord de carre
int CCarre::getBord() const
{
	return getLongu();
}

//Cette méthode utilise les méthode de la classe mère rectangle
//pour setter les bords à la même valeur et ainsi respecter 
//la definition du carre.
void CCarre::setBord(int bord)
{
	setLarg(bord);
	setLongu(bord);
}


//implémentation de la méthode dessiner pour le carre en utilisant de getBord()
void CCarre::dessiner()
{
	cout << "Je suis un carre de cote: " << getBord() << endl;
	cout << "Mes coordonnées sont: " << this->Getm_x() << " " << this->Getm_y() << endl;
	aire();
	perimetre();
}

//implémentation de la méthode aire pour le carre en utilisant de getBord()
void CCarre::aire()
{
	cout << "Je suis un carre d'aire: " << getBord()*getBord() << endl;
}

//implémentation de la méthode perimetre pour le carre en utilisant de getBord()
void CCarre::perimetre()
{
	cout << "Je suis un carre de perimetre: " << (getBord() + getBord()) * 2 << endl;
}



