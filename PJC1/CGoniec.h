
#ifndef CGoniec_h
#define CGoniec_h


#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
#include"CPlansza.h"
using namespace std;
/**
 * @brief
 * Goniec
 */
class CGoniec :public CFigura {
public:
	/**
 * @brief
 * Konstruktor
 * @param kol kolor jaki ma miec figura
 * @param x wspolrzedna rzad jaka ma miec figura
 * @param y wspolrzedna kolumna jaka ma miec figura
 * @param p wskaznik na plansze do ktorej ma nalezec figura
 */
	CGoniec(char kol, int x, int y, CPlansza* p);
	/**
 * @brief
 * funkcja zwracajaca wszystkie wspolrzedne pol dla ktorych mozliwy jest ruch
 * dla gonca beda to pola po skosie we wszystkie strony
 */
	vector<wspolrzedne> mozliwe_ruchy();
private:
	CPlansza* plansza;
};

#endif CGoniec_h