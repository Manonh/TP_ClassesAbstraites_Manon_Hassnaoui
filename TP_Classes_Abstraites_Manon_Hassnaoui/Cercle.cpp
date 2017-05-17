#include "Cercle.h"
#include <iostream>

using namespace std;

CCercle::~CCercle()
{
}

//r�cup�re la valeur de radius
int CCercle::getRadius() const
{
	return m_radius;
}

//modifie la valeur de radius
void CCercle::setRadius(int Ra)
{
	this->m_radius = Ra;
}

//impl�mentation de la m�thode dessiner pour le cercle
void CCercle::dessiner()
{
	cout << "Je suis un cercle de rayon: " << m_radius << endl;
	cout << "Mes coordonnees sont: " << Getm_x() << " " << Getm_y() << endl;
	aire();
	perimetre();
}

//impl�mentation de la m�thode aire pour le cercle
void CCercle::aire()
{
	cout << "Je suis un cercle d'aire: " <<  (m_radius*m_radius)*3.14 << "\n";
}

//impl�mentation de la m�thode perimetre pour le cercle
void CCercle::perimetre()
{
	cout << "Je suis un cercle d'aire: " << (2 * 3.14)*m_radius << endl;
}
