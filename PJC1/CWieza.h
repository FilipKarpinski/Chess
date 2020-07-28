
#ifndef CWieza_h
#define CWieza_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Wieza
 */
class CWieza :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CWieza(char kol, int x, int y, CPlansza* p);
	/**
* @brief
* funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla wiezy beda to wszytkie pola w poziomie i w pionie we wszystkie strony
*/
	vector<wspolrzedne> mozliwe_ruchy();
private:
	CPlansza* plansza;
};

#endif CWieza_h