
#ifndef CKrolowa_h
#define CKrolowa_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Krolowa
 */
class CKrolowa :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CKrolowa(char kol, int x, int y, CPlansza* p);
	/**
* @brief
* funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla krolowej beda to wszystkie mozliwe pola po skosie w kazda strone oraz w pionie i poziomie w kazda strone
*/
	vector<wspolrzedne> mozliwe_ruchy();
	CPlansza* plansza;
};

#endif CKrolowa_h