#include "CWieza.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CWieza::CWieza(char kol, int x, int y, CPlansza* p) {
	kolor = kol;
	if (kolor == 'w')
		nazwa = 'R';
	else
		nazwa = 'r';
	wsp.rzad = x;
	wsp.kolumna = y;
	plansza = p;
}

vector<wspolrzedne> CWieza::mozliwe_ruchy() {
	int x = wsp.rzad;
	int y = wsp.kolumna;
	vector<wspolrzedne> wektor;
	wspolrzedne wspol;
	int pom = 0;
	while (true) {
		pom++;
		if (x + pom > 7)
			break;
		else if (plansza->moja_plansza[x + pom][y] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {
		pom--;
		if (x + pom < 0)
			break;
		else if (plansza->moja_plansza[x + pom][y] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {
		pom++;
		if (y + pom > 7)
			break;
		else if (plansza->moja_plansza[x][y + pom] == NULL) {
			wspol.rzad = x;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x][y + pom]->get_kolor() != kolor) {
			wspol.rzad = x;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {
		pom--;
		if (y + pom < 0)
			break;
		else if (plansza->moja_plansza[x][y + pom] == NULL) {
			wspol.rzad = x;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x][y + pom]->get_kolor() != kolor) {
			wspol.rzad = x;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}
	return wektor;
}