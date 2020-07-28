
#ifndef CGraa_h
#define CGraa_h


#include<iostream>
#include <string>
#include<vector>
#include"CPlansza.h"
#include"CKonsola.h"
using namespace std;
/**
 * @brief
 * klasa ktora zajmuje sie cala logika rozgrywki
 */
class CGraa {
public:
	/**
* @brief
* konstruktor inicjalizujacy rozgrywke
* @param gracz kolor gracza od ktorego ma sie rozpoczac gra
* @param planszaa wskaznik na plansze na jakiej odbywa sie rozgrywka
*/
	CGraa(char gracz,CPlansza *planszaa);
	/**
 * @brief
 * funkcja ktora pobiera od uzytkownika pole na ktorym znajduje sie jego figura dla ktorej chce wykonac ruch
 */
	wspolrzedne podaj_pole();
	/**
* @brief
* funkcja ktora pobiera od uzytkownika pole na ktore ma sie ruszyc jego wczesniej wybrana figura
* @param wektor wektor wspolrzednych pol na ktora moze ruszyc sie wybrana figura
* @param x docelowa wspolrzedna rzedu na ktora ma byc wykonany ruch 
* @param y docelowa wspolrzedna kolumny na ktora ma byc wykonany ruch 
*/
	wspolrzedne podaj_pole2(vector<wspolrzedne> wektor, int x, int y);
	/**
* @brief
* ruch figury z jednej pozycji do drugiej
* @param x1 wspolrzedna rzad figury ktora ma sie ruszyc
* @param y1 wspolrzedna kolumna figury ktora ma sie ruszyc
* @param x2 wspolrzenda rzad na ktora ma sie ruszyc figura
* @param y2 wspolrzedna kolumna na ktora ma sie ruszyc figura
*/
	void ruch(int x1, int y1, int x2, int y2);
	/**
* @brief
* funkcja ktora wykonuje ruch figury z jednego miejsca na drugie , zwraca na jakiego gracza jest szach jesli jest i powraca plansze do ustawienia przed ruchem
* @param x1 wspolrzedna rzad figury ktora ma sie ruszyc
* @param y1 wspolrzedna kolumna figury ktora ma sie ruszyc
* @param x2 wspolrzenda rzad na ktora ma sie ruszyc figura
* @param y2 wspolrzedna kolumna na ktora ma sie ruszyc figura
*/
	char phantom_ruch(int x1, int y1, int x2, int y2);
	/**
* @brief
* funkcja ktora zmienia kolor aktywnego gracza 
*/
	void zmiana_tury();
	/**
* @brief
* funkcja zwracajaca na jakiego gracza jest szach jesli jest
*/
	char szach();
	/**
* @brief
* funkcja ktora sprawdza czy jest szach na gracz podaego w argumencie
* @param gracz kolor gracza na ktorego jest szach
*/
	bool mat(char gracz);
	/**
* @brief
* funkcja zwracajaca kolor aktywnego gracza
*/
	char get_gracz();
	/**
* @brief
* funkcja zwracajaca wektor mozliwych ruchow dla figury o danych wspolrzednych
* @param x wspolrzedna rzad danej figury
* @param y wspolrzedna kolumna danej figury
*/
	vector<wspolrzedne> get_ruchy(int x, int y);
private:
	char Gracz;
	CPlansza* plansza;
};


#endif CGraa_h