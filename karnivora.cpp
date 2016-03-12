#include "karnivora.h"
using namespace std;

void Karnivora::makan() {
	//if satu kotak dengan hewan lain, maka hewan ini akan menang
	
}

void Karnivora::gerak() {
	switch(DFS(1)) {
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