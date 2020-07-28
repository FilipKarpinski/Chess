
#ifndef CKonik_h
#define CKonik_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Konik
 */
class CKonik :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CKonik(char kol,int x,int y, CPlansza* p);
	/**
* @brief
 * funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla konika beda to pola +-2 w pionie +-1 w poziomie i na odwrot
*/
	vector<wspolrzedne> mozliwe_ruchy();
private:
	wspolrzedne T[8];
	CPlansza* plansza;
};

#endif CKonik_h