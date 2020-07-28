
#ifndef CPionek_h
#define CPionek_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Pionek
 */
class CPionek :public CFigura {
public:
	/**
* @brief
* Konstruktor
* @param kol kolor jaki ma miec figura
* @param x wspolrzedna rzad jaka ma miec figura
* @param y wspolrzedna kolumna jaka ma miec figura
* @param p wskaznik na plansze do ktorej ma nalezec figura
*/
	CPionek(char kol, int x, int y, CPlansza* p);
	/**
* @brief
* funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
* dla pionka beda to pola zblizajace go o 1 w pionie w strone przeciwnika oraz o 1 po skosie w strony zblizajace do go przeciwnika pod warunkiem za na tym polu znjaduje sie figura przeciwnika, w pierwszym ruchu moze sie ruszyc o 2 pola pionowo w strone przeciwnika
*/
	vector<wspolrzedne> mozliwe_ruchy();
private:
	CPlansza* plansza;
};

#endif CPionek_h