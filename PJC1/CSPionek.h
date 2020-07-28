
#ifndef CSPionek_h
#define CSPionek_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Super pionek
 */
class CSPionek :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CSPionek(char kol, int x, int y, CPlansza* p);
	/**
* @brief
* funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla super pionka beda to 2 pola w pionie w gora albo w dol  oraz o 1 po skosie w strony zblizajace do go przeciwnika pod warunkiem za na tym polu znjaduje sie figura przeciwnika
*/
	vector<wspolrzedne> mozliwe_ruchy();
private:
	CPlansza* plansza;
};

#endif CSPionek_h
