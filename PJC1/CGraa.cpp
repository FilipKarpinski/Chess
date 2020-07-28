#include "CGraa.h"
#include"CKonik.h"
#include"CWieza.h"
#include"CGoniec.h"
#include"CPionek.h"
#include"CKrol.h"
#include"CKrolowa.h"
#include"CSPionek.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CGraa::CGraa(char gracz,CPlansza* planszaa) {
	plansza = planszaa;
	Gracz = gracz;
}

wspolrzedne CGraa::podaj_pole() {				
	wspolrzedne wsp;
	string kol;
	string row;
	while (true) {
		cin >> kol;
		if (kol[0] == 'a') wsp.kolumna = 1; else if (kol[0] == 'b') wsp.kolumna = 2; else if (kol[0] == 'c') wsp.kolumna = 3; else if (kol[0] == 'd') wsp.kolumna = 4; else if (kol[0] == 'e') wsp.kolumna = 5; else if (kol[0] == 'f') wsp.kolumna = 6; else if (kol[0] == 'g') wsp.kolumna = 7; else if (kol[0] == 'h') wsp.kolumna = 8; else wsp.kolumna = 100;
		cin >> row;
		if (row[0] == '1') wsp.rzad = 1; else if (row[0] == '2') wsp.rzad = 2; else if (row[0] == '3') wsp.rzad = 3; else if (row[0] == '4') wsp.rzad = 4; else if (row[0] == '5') wsp.rzad = 5; else if (row[0] == '6') wsp.rzad = 6; else if (row[0] == '7') wsp.rzad = 7; else if (row[0] == '8') wsp.rzad = 8; else wsp.rzad = 100;
		wsp.rzad = wsp.rzad - 1;
		wsp.kolumna = wsp.kolumna - 1;
		if (wsp.rzad < 90 && wsp.kolumna < 99){
			if (plansza->moja_plansza[wsp.rzad][wsp.kolumna] != NULL) {
				if (wsp.rzad >= 0 && wsp.rzad <= 7 && wsp.kolumna >= 0 && wsp.kolumna <= 7 && plansza->moja_plansza[wsp.rzad][wsp.kolumna]->get_kolor() == Gracz) {
					return wsp;
				}
			}
	}
		wsp.rzad = 99;
		wsp.kolumna = 99;
		return wsp;
	}
}

wspolrzedne CGraa::podaj_pole2(vector<wspolrzedne> wektor, int x, int y) {		
	wspolrzedne wsp;
	string kol;
	string row;
	while (true) {
		cin >> kol;
		if (kol[0] == 'a') wsp.kolumna = 1; else if (kol[0] == 'b') wsp.kolumna = 2; else if (kol[0] == 'c') wsp.kolumna = 3; else if (kol[0] == 'd') wsp.kolumna = 4; else if (kol[0] == 'e') wsp.kolumna = 5; else if (kol[0] == 'f') wsp.kolumna = 6; else if (kol[0] == 'g') wsp.kolumna = 7; else if (kol[0] == 'h') wsp.kolumna = 8; else wsp.kolumna = 100;
		cin >> row;
		if (row[0] == '1') wsp.rzad = 1; else if (row[0] == '2') wsp.rzad = 2; else if (row[0] == '3') wsp.rzad = 3; else if (row[0] == '4') wsp.rzad = 4; else if (row[0] == '5') wsp.rzad = 5; else if (row[0] == '6') wsp.rzad = 6; else if (row[0] == '7') wsp.rzad = 7; else if (row[0] == '8') wsp.rzad = 8; else wsp.rzad = 100;
		wsp.rzad = wsp.rzad - 1;
		wsp.kolumna = wsp.kolumna - 1;
		for (int i = 0; i < wektor.size(); i++) {
			if ((wektor[i].rzad == wsp.rzad && wektor[i].kolumna == wsp.kolumna) || (wsp.rzad == x && wsp.kolumna == y))
				return wsp;
		}
		wsp.rzad = 99;
		wsp.kolumna = 99;
		return wsp;
	}
}

void CGraa::ruch(int x1, int y1, int x2, int y2) {					
	if (x1 != x2 || y1 != y2) {
	if (plansza->moja_plansza[x2][y2] != NULL)
		plansza->moja_plansza[x2][y2]->~CFigura();
	char pom = 'z';
		pom = plansza->moja_plansza[x1][y1]->get_nazwa();
	if (pom == 'R')
		plansza->moja_plansza[x2][y2] = new CWieza('w', x2, y2, plansza);
	if (pom == 'r')
		plansza->moja_plansza[x2][y2] = new CWieza('b', x2, y2, plansza);
	if (pom == 'B')
		plansza->moja_plansza[x2][y2] = new CGoniec('w', x2, y2, plansza);
	if (pom == 'b')
		plansza->moja_plansza[x2][y2] = new CGoniec('b', x2, y2, plansza);
	if (pom == 'P')
		plansza->moja_plansza[x2][y2] = new CPionek('w', x2, y2, plansza);
	if (pom == 'p')
		plansza->moja_plansza[x2][y2] = new CPionek('b', x2, y2, plansza);
	if (pom == 'J')
		plansza->moja_plansza[x2][y2] = new CKonik('w', x2, y2, plansza);
	if (pom == 'j')
		plansza->moja_plansza[x2][y2] = new CKonik('b', x2, y2, plansza);
	if (pom == 'Q')
		plansza->moja_plansza[x2][y2] = new CKrolowa('w', x2, y2, plansza);
	if (pom == 'q')
		plansza->moja_plansza[x2][y2] = new CKrolowa('b', x2, y2, plansza);
	if (pom == 'K')
		plansza->moja_plansza[x2][y2] = new CKrol('w', x2, y2, plansza);
	if (pom == 'k')
		plansza->moja_plansza[x2][y2] = new CKrol('b', x2, y2, plansza);
	if (pom == 'S')
		plansza->moja_plansza[x2][y2] = new CSPionek('w', x2, y2, plansza);
	if (pom == 's')
		plansza->moja_plansza[x2][y2] = new CSPionek('b', x2, y2, plansza);
	plansza->moja_plansza[x1][y1]->~CFigura();
	plansza->moja_plansza[x1][y1]=NULL;
}
}

char CGraa::phantom_ruch(int x1, int y1, int x2, int y2) {				//wykonanie ruchu, sprawdzenie czy jest szach po tym ruchu, powrot do pierwotnego ustawienia planszy, zwrot informacji o szachu
	char pom = 'z';
	char pom2;
	if (plansza->moja_plansza[x2][y2] != NULL)
		pom = plansza->moja_plansza[x2][y2]->get_nazwa();
	ruch(x1, y1, x2, y2);
	pom2 = szach();
	ruch(x2,y2,x1,y1);
	if (pom == 'R')
		plansza->moja_plansza[x2][y2] = new CWieza('w', x2, y2, plansza);
	if (pom == 'r')
		plansza->moja_plansza[x2][y2] = new CWieza('b', x2, y2, plansza);
	if (pom == 'B')
		plansza->moja_plansza[x2][y2] = new CGoniec('w', x2, y2, plansza);
	if (pom == 'b')
		plansza->moja_plansza[x2][y2] = new CGoniec('b', x2, y2, plansza);
	if (pom == 'P')
		plansza->moja_plansza[x2][y2] = new CPionek('w', x2, y2, plansza);
	if (pom == 'p')
		plansza->moja_plansza[x2][y2] = new CPionek('b', x2, y2, plansza);
	if (pom == 'J')
		plansza->moja_plansza[x2][y2] = new CKonik('w', x2, y2, plansza);
	if (pom == 'j')
		plansza->moja_plansza[x2][y2] = new CKonik('b', x2, y2, plansza);
	if (pom == 'Q')
		plansza->moja_plansza[x2][y2] = new CKrolowa('w', x2, y2, plansza);
	if (pom == 'q')
		plansza->moja_plansza[x2][y2] = new CKrolowa('b', x2, y2, plansza);
	if (pom == 'K')
		plansza->moja_plansza[x2][y2] = new CKrol('w', x2, y2, plansza);
	if (pom == 'k')
		plansza->moja_plansza[x2][y2] = new CKrol('b', x2, y2, plansza);
	if (pom == 'S')
		plansza->moja_plansza[x2][y2] = new CSPionek('w', x2, y2, plansza);
	if (pom == 's')
		plansza->moja_plansza[x2][y2] = new CSPionek('b', x2, y2, plansza);
	return pom2;
}


char CGraa::szach() {	
	vector<wspolrzedne> wektor;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (plansza->moja_plansza[i][j] != NULL) {
				wektor = plansza->moja_plansza[i][j]->mozliwe_ruchy();
				for (int k = 0; k < wektor.size(); k++) {
					if (plansza->moja_plansza[wektor[k].rzad][wektor[k].kolumna] != NULL) {
						if (plansza->moja_plansza[wektor[k].rzad][wektor[k].kolumna]->get_nazwa() == 'k')
							return 'b';
						if (plansza->moja_plansza[wektor[k].rzad][wektor[k].kolumna]->get_nazwa() == 'K')
							return 'w';
					}
				}
			}
		}
	}
	return 'z';
}

bool CGraa::mat(char kolor_gracza) {		
	vector<wspolrzedne> wektor;
	int liczba = 0;
	char pom='z';
	if (kolor_gracza == 'z')
		return 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (plansza->moja_plansza[i][j] != NULL) {
				if (plansza->moja_plansza[i][j]->get_kolor() == kolor_gracza) {
					wektor = plansza->moja_plansza[i][j]->mozliwe_ruchy();
					for (int k = 0; k < wektor.size(); k++) {
						if (phantom_ruch(i, j, wektor[k].rzad, wektor[k].kolumna) == 'z')
							return 0;
					}
				}
			}
		}
	}
	return 1;
	}

void CGraa::zmiana_tury() {
	if (Gracz == 'w')
		Gracz = 'b';
	else
		Gracz = 'w';
}

char CGraa::get_gracz() {
	return Gracz;
}

vector<wspolrzedne> CGraa::get_ruchy(int x, int y) {
	return plansza->moja_plansza[x][y]->mozliwe_ruchy();
}