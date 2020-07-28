#include "CPlansza.h"
#include"CKonik.h"
#include"CGoniec.h"
#include"CWieza.h"
#include"CPionek.h"
#include"CKrol.h"
#include"CKrolowa.h"
#include"CSPionek.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CPlansza::CPlansza() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			moja_plansza[i][j] = NULL;
		}
	}
	moja_plansza[0][0] = new CWieza('w', 0, 0, this);   moja_plansza[1][0] = new CSPionek('w', 1, 0, this);
	moja_plansza[0][1] = new CKonik('w', 0, 1, this);   moja_plansza[1][1] = new CPionek('w', 1, 1, this);
	moja_plansza[0][2] = new CGoniec('w', 0, 2, this);   moja_plansza[1][2] = new CPionek('w', 1, 2, this);
	moja_plansza[0][3] = new CKrolowa('w', 0, 3, this);   moja_plansza[1][3] = new CPionek('w', 1, 3, this);
	moja_plansza[0][4] = new CKrol('w', 0, 4, this);   moja_plansza[1][4] = new CPionek('w', 1, 4, this);
	moja_plansza[0][5] = new CGoniec('w', 0, 5, this);   moja_plansza[1][5] = new CPionek('w', 1, 5, this);
	moja_plansza[0][6] = new CKonik('w', 0, 6, this);   moja_plansza[1][6] = new CPionek('w', 1, 6, this);
	moja_plansza[0][7] = new CWieza('w', 0, 7, this);   moja_plansza[1][7] = new CSPionek('w', 1, 7, this);
	moja_plansza[6][0] = new CSPionek('b', 6, 0, this);   moja_plansza[7][0] = new CWieza('b', 7, 0, this);
	moja_plansza[6][1] = new CPionek('b', 6, 1, this);   moja_plansza[7][1] = new CKonik('b', 7, 1, this);
	moja_plansza[6][2] = new CPionek('b', 6, 2, this);   moja_plansza[7][2] = new CGoniec('b', 7, 2, this);
	moja_plansza[6][3] = new CPionek('b', 6, 3, this);   moja_plansza[7][3] = new CKrolowa('b', 7, 3, this);
	moja_plansza[6][4] = new CPionek('b', 6, 4, this);   moja_plansza[7][4] = new CKrol('b', 7, 4, this);
	moja_plansza[6][5] = new CPionek('b', 6, 5, this);   moja_plansza[7][5] = new CGoniec('b', 7, 5, this);
	moja_plansza[6][6] = new CPionek('b', 6, 6, this);   moja_plansza[7][6] = new CKonik('b', 7, 6, this);
	moja_plansza[6][7] = new CSPionek('b', 6, 7, this);   moja_plansza[7][7] = new CWieza('b', 7, 7, this);
	// do szybkiego sprawdzenie szachowania i matowania
	/*moja_plansza[0][0] = new CKrol('b', 0, 0, this);   moja_plansza[1][7] = new CWieza('w', 1, 7, this);
	moja_plansza[1][2] = new CWieza('w', 1, 2, this);   moja_plansza[2][0] = new CWieza('b', 2, 0, this);*/
}
