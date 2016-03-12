#include "herbivora.h"
#include "board.h"
using namespace std;

void Herbivora::makan() {
	//if satu kotak dengan tumbuhan lain, maka Omnivora akan memakan tumbuhan tersebut
	
}

void Herbivora::gerak() {
	switch(DFS(2)) {
		case 0 : {
			posisiX += 1;
			posisiY += 0;
		}
		case 1 : {
			posisiX += 1;
			posisiY -= 1;
		}
		case 2 : {
			posisiX += 0;
			posisiY -= 1;
		}
		case 3 : {
			posisiX -= 1;
			posisiY -= 1;
		}
		case 4 : {
			posisiX -= 1;
			posisiY += 0;
		}
		case 5 : {
			posisiX -= 1;
			posisiY += 1;
		}
		case 6 : {
			posisiX += 0;
			posisiY += 1;
		}
		case 7 : {
			posisiX += 1;
			posisiY += 1;
		}
	}

	Board *b = Board::Instance();
	b->MasukkanMakhluk(this);

	
}
