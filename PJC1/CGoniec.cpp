#include "CGoniec.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CGoniec::CGoniec(char kol, int x, int y, CPlansza* p) {
	kolor = kol;
	if (kolor == 'w')
		nazwa = 'B';
	else
		nazwa = 'b';
	wsp.rzad = x;
	wsp.kolumna = y;
	plansza = p;
}

vector<wspolrzedne> CGoniec::mozliwe_ruchy() {
	int x = wsp.rzad;
	int y = wsp.kolumna;
	vector<wspolrzedne> wektor;
	wspolrzedne wspol;
	int pom = 0;
	while (true) {					// mozliwe pola w kierunku: prawy gorny
		pom++;
		if (x + pom > 7 || y + pom > 7)
			break;
		else if (plansza->moja_plansza[x + pom][y + pom] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y + pom]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {					// mozliwe pola w kierunku: lewy dolny
		pom--;
		if (x + pom < 0 || y + pom < 0)
			break;
		else if (plansza->moja_plansza[x + pom][y + pom] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y + pom]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y + pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {					// mozliwe pola w kierunku: lewy gorny
		pom++;
		if (x + pom > 7 || y - pom < 0)
			break;
		else if (plansza->moja_plansza[x + pom][y - pom] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y - pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y - pom]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y - pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}

	pom = 0;
	while (true) {					// mozliwe pola w kierunku: prawy dolny
		pom--;
		if (x + pom < 0 || y - pom > 7)
			break;
		else if (plansza->moja_plansza[x + pom][y - pom] == NULL) {
			wspol.rzad = x + pom;
			wspol.kolumna = y - pom;
			wektor.push_back(wspol);
		}
		else if (plansza->moja_plansza[x + pom][y - pom]->get_kolor() != kolor) {
			wspol.rzad = x + pom;
			wspol.kolumna = y - pom;
			wektor.push_back(wspol);
			break;
		}
		else
			break;
	}
	return wektor;
}
