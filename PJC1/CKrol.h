
#ifndef CKrol_h
#define CKrol_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Krol
 */
class CKrol :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CKrol(char kol, int x, int y, CPlansza* p);
	/**
* @brief
* funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla krola beda to wszystkie sasiednie pola
*/
	vector<wspolrzedne> mozliwe_ruchy();
private:
	wspolrzedne T[8];
	CPlansza* plansza;
};

#endif CKrol_h