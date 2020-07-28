
#include "CGraa.h"
#include "CFigura.h"
#include "CPlansza.h"
#include"CKonsola.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	CPlansza plansz;
	CPlansza* p = &plansz;
	CGraa g('w',p);
	CKonsola k(p);
	vector<wspolrzedne> wektor;
	wspolrzedne wsp, wsp2;
	char litera;
	char kolor_gracza = 'z';
	k.drukuj();
	while (true) {
		if (g.get_gracz() == 'w')									//wypisanie kogo jest tura
			cout << " Tura gracza bialego (duze litery)" << endl;
		else
			cout << " Tura gracza czarnego (male litery)" << endl;
		
		if (g.szach() == 'b') {										//wypisanie na kogo jest szach
			cout << " Szach na gracza czarnego (male litery)" << endl;
			kolor_gracza = 'b';
		}
		if (g.szach() == 'w') {
			cout << " Szach na gracza bialego (duze litery)" << endl;
			kolor_gracza = 'w';
		}

		do {
			do {
				wsp = g.podaj_pole();
				if (wsp.rzad == 99 && wsp.kolumna == 99)						
					cout << "Bledne wspolrzedne" << endl;
			} while (wsp.rzad == 99 && wsp.kolumna == 99);
			wektor = g.get_ruchy(wsp.rzad, wsp.kolumna);
			if(wektor.size()==0)
				cout << "Brak mozliwych ruchow" << endl;
		} while (wektor.size() == 0);

		for (int i = 0; i < wektor.size(); i++) {
			if (wektor[i].kolumna == 0) litera = 'a'; else if (wektor[i].kolumna == 1) litera = 'b'; else if (wektor[i].kolumna == 2) litera = 'c'; else if (wektor[i].kolumna == 3) litera = 'd'; else if (wektor[i].kolumna == 4) litera = 'e'; else if (wektor[i].kolumna == 5) litera = 'f'; else if (wektor[i].kolumna == 6) litera = 'g'; else if (wektor[i].kolumna == 7) litera = 'h'; else litera = 'o';
			cout << litera << wektor[i].rzad + 1 << ' ';
		}
		cout << endl;

		do {
			wsp2 = g.podaj_pole2(wektor, wsp.rzad,wsp.kolumna);
			if (wsp2.rzad == 99 && wsp2.kolumna == 99)
				cout << "Bledne wspolrzedne" << endl;
		} while (wsp2.rzad == 99 && wsp2.kolumna == 99);

			if (g.phantom_ruch(wsp.rzad, wsp.kolumna, wsp2.rzad, wsp2.kolumna) != g.get_gracz()) {
				g.ruch(wsp.rzad, wsp.kolumna, wsp2.rzad, wsp2.kolumna);
				if (wsp.rzad != wsp2.rzad || wsp.kolumna != wsp2.kolumna)
					g.zmiana_tury();
			}
		system("cls");
		k.drukuj();
		if (g.szach() == 'b')
			kolor_gracza = 'b';
		if (g.szach() == 'w')
			kolor_gracza = 'w';
		if (g.mat(kolor_gracza) == true)
			break;
	}
	if(g.get_gracz()=='w')
	cout << "Szach mat, wygrywa gracz czarny (male litery)" << endl;
	if(g.get_gracz()=='b')
		cout << "Szach mat, wygrywa gracz bialy (duze litery)" << endl;
}