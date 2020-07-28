
#ifndef CFigura_h
#define CFigura_h


#include<iostream>
#include <string>
#include<vector>
using namespace std;
/**
 * @brief
 * struktura o dwoch polach reprezentujaca wspolrzedne(rzad i kolumna) na planszy
 */
struct wspolrzedne {
	int rzad;
	int kolumna;
};
/**
 * @brief
 * wirtualna klasa po ktorej dziedzicza wszystki figury
 */
class CFigura {
public:
	/**
 * @brief
 * funkcja ktora zwraca wszystkie pola na ktore moze ruszyc sie figura
 */
	virtual vector<wspolrzedne> mozliwe_ruchy() = 0;
	/**
* @brief
* wirtualny destruktor
*/
	virtual ~CFigura()
	{

	}
	/**
* @brief
* funkcja zwracajaca kolor figury
*/
	char get_kolor();
	/**
* @brief
* funkcja zwracajaca nazwe figury
*/
	char get_nazwa();
	/**
* @brief
* funkcja zwracajaca wspolrzedne figury
*/
	wspolrzedne get_wsp();
protected:
	char kolor;
	char nazwa;
	wspolrzedne wsp;
};


#endif CFigura_h