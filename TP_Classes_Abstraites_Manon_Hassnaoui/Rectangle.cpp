#include "Rectangle.h"
#include<iostream>

using namespace std;


CRectangle::~CRectangle()
{
}

//Mutateur des données de la classe CRectangle
int CRectangle::getLarg() const
{
	return m_largeur;
}

int CRectangle::getLongu() const
{
	return m_longueur;
}

void CRectangle::setLarg(int La)
{
	this->m_largeur = La;
}

void CRectangle::setLongu(int Lo)
{
	this->m_longueur = Lo;
}

//implémentation de la fonction virtuelle pure dessiner pour le rectangle
void CRectangle::dessiner()
{
	cout << "Je suis un rectangle de largeur: " << m_largeur << " et de longueur: " << m_longueur << endl;
	cout << "Mes coordonnees sont: " << Getm_x() << " " << Getm_y() << endl;
	aire();
	perimetre();
}

//implémentation de la fonction virtuelle pure aire pour le rectangle
void CRectangle::aire()
{
	cout << "Mon aire est de: " << m_largeur*m_longueur << endl;
}

//implémentation de la fonction virtuelle pure perimetre pour le rectangle
void CRectangle::perimetre()
{
	cout << "Mon perimetre est de: " << (m_largeur + m_longueur) * 2 << endl;
}
