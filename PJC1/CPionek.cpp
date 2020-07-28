#include "CPionek.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CPionek::CPionek(char kol, int x, int y, CPlansza* p) {
	kolor = kol;
	if (kolor == 'w')
		nazwa = 'P';
	else
		nazwa = 'p';
	wsp.rzad = x;
	wsp.kolumna = y;
	plansza = p;
}

vector<wspolrzedne> CPionek::mozliwe_ruchy() {
	int x = wsp.rzad;
	int y = wsp.kolumna;
	vector<wspolrzedne> wektor;
	wspolrzedne wspol;
	if (kolor == 'w') {
		if (x + 1 < 8) {
			if (plansza->moja_plansza[x + 1][y] == NULL) {
				wspol.rzad = x + 1;
				wspol.kolumna = y;
				wektor.push_back(wspol);
			}
		}
		if (x == 1) {
			if (plansza->moja_plansza[x + 2][y] == NULL && plansza->moja_plansza[x + 1][y] == NULL) {
				wspol.rzad = x + 2;
				wspol.kolumna = y;
				wektor.push_back(wspol);
			}
		}
		if (x + 1 < 8 && y + 1 < 8) {
			if (plansza->moja_plansza[x + 1][y + 1] != NULL && plansza->moja_plansza[x + 1][y + 1]->get_kolor() != kolor) {
				wspol.rzad = x + 1;
				wspol.kolumna = y + 1;
				wektor.push_back(wspol);
			}
		}
		if (x + 1 < 8 && y - 1 > -1) {
			if (plansza->moja_plansza[x + 1][y - 1] != NULL && plansza->moja_plansza[x + 1][y - 1]->get_kolor() != kolor) {
				wspol.rzad = x + 1;
				wspol.kolumna = y - 1;
				wektor.push_back(wspol);
			}
		}
	}
	if (kolor == 'b') {
		if (x - 1 > -1) {
			if (plansza->moja_plansza[x - 1][y] == NULL) {
				wspol.rzad = x - 1;
				wspol.kolumna = y;
				wektor.push_back(wspol);
			}
		}
		if (x == 6) {
			if (plansza->moja_plansza[x - 2][y] == NULL && plansza->moja_plansza[x - 1][y] == NULL) {
				wspol.rzad = x - 2;
				wspol.kolumna = y;
				wektor.push_back(wspol);
			}
		}
		if (x - 1 > -1 && y + 1 < 8) {
			if (plansza->moja_plansza[x - 1][y + 1] != NULL && plansza->moja_plansza[x - 1][y + 1]->get_kolor() != kolor) {
				wspol.rzad = x - 1;
				wspol.kolumna = y + 1;
				wektor.push_back(wspol);
			}
		}
		if (x - 1 > -1 && y - 1 > -1) {
			if (plansza->moja_plansza[x - 1][y - 1] != NULL && plansza->moja_plansza[x - 1][y - 1]->get_kolor() != kolor) {
				wspol.rzad = x - 1;
				wspol.kolumna = y - 1;
				wektor.push_back(wspol);
			}
		}
	}
	return wektor;
}

