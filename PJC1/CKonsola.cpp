#include "CKonsola.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;

CKonsola::CKonsola(CPlansza* p) {
	plansza = p;
}
void CKonsola::drukuj() {
	cout << endl << endl << endl << endl;
	cout << "           a b c d e f g h" << endl << endl;
	for (int i = 7; i >= 0; i--) {
		cout << "        " << i + 1 << "  ";
		for (int j = 0; j < 8; j++) {
			if (plansza->moja_plansza[i][j] == NULL) {
				cout << "- ";
			}
			else {
				cout << plansza->moja_plansza[i][j]->get_nazwa() << " ";
			}
			if (j == 7) {
				cout << " " << i + 1 << endl;
			}
		}
	}
	cout << endl << "           a b c d e f g h" << endl << endl;
};