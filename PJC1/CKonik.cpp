#include "CKonik.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CKonik::CKonik(char kol,int x, int y, CPlansza* p) {
	kolor = kol;
	if (kolor == 'w')
		nazwa = 'J';
	else
		nazwa = 'j';
	wsp.rzad = x;
	wsp.kolumna = y;
	plansza = p;
	T[0].rzad = 1; T[0].kolumna = 2; T[1].rzad = 1; T[1].kolumna = -2; T[2].rzad = -1; T[2].kolumna = 2; T[3].rzad = -1; T[3].kolumna = -2;
	T[4].rzad = 2; T[4].kolumna = 1; T[5].rzad = 2; T[5].kolumna = -1; T[6].rzad = -2; T[6].kolumna = 1; T[7].rzad = -2; T[7].kolumna = -1;
}

vector<wspolrzedne> CKonik::mozliwe_ruchy() {
	int x = wsp.rzad;
	int y = wsp.kolumna;
	vector<wspolrzedne> wektor;
	wspolrzedne wspol;
	for (int i = 0; i < 8; i++) {
		if (x + T[i].rzad < 8 && y + T[i].kolumna < 8 && x + T[i].rzad > -1 && y + T[i].kolumna > -1) {
			if (plansza->moja_plansza[x + T[i].rzad][y + T[i].kolumna] == NULL || plansza->moja_plansza[x + T[i].rzad][y + T[i].kolumna]->get_kolor() != kolor) {
				wspol.rzad = x + T[i].rzad;
				wspol.kolumna = y + T[i].kolumna;
				wektor.push_back(wspol);
			}
		}
    }
	return wektor;

}

