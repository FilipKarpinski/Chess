
#ifndef CPlansza_h
#define CPlansza_h

#include<iostream>
#include <string>
#include<vector>
#include"CFigura.h"
using namespace std;
/**
 * @brief
 * klasa ktorej polem jest tablica wskaznikow na figury
 */
class CPlansza {
public:
	/**
 * @brief
 * domyslny konstruktor
 */
	CPlansza();
	/**
* @brief
* domyslny destruktor
*/
	~CPlansza()
	{

	}

private:
	friend class CGraa;
	friend class CPionek;
	friend class CKonik;
	friend class CGoniec;
	friend class CWieza;
	friend class CKrolowa;
	friend class CKrol;
	friend class CSPionek;
	friend class CKonsola;
	CFigura* moja_plansza[8][8];

};

#endif CPlansza_h