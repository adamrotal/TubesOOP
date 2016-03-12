#include "omnivora.h"
using namespace std;

void Omnivora::makan() {
	//if satu kotak dengan hewan lain, maka hewan ini akan menang jika expnya lebih besa
	
}

void Omnivora::gerak() {
	switch(DFS(3)) {
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
}
