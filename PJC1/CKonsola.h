
#ifndef CKonsola_h
#define CKonsola_h


#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * klasa odpowiedzialna za drukowanie planszy w konsoli
 */
class CKonsola {
public:
	/**
* @brief
* konstruktor konsoli
* @param p wskaznik na plansze ktora ma byc drukowana
*/
	CKonsola(CPlansza* p);
	/**
 * @brief
 * funkcja ktora drukuje w konsoli w odpowiednim dla szachow formacie
 */
	void drukuj();
private:
	CPlansza* plansza;
};


#endif CKonsola_h