#include "Carre.h"
#include "Cercle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
	//dans le debogueur les valeur sont bonnes mais pas la valeur de l'ordonnee à l'affichage
	CRectangle mRect(5, 8, 9, 15);
	mRect.dessiner();

	CCercle mCercle(5, 2, 2);
	mCercle.dessiner();

	CCarre mCarre(8, 9, 1);
	mCarre.dessiner();

	system("pause");
	return 0;

}
