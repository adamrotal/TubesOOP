#include "spinosaurus.h"
#include <iostream>

using namespace std;

Spinosaurus::Spinosaurus(int a, int b) {
	posisiX = a;
	posisiY = b;
	
	umur = 0;
	exp = 700;
	bentuk = '#';
	waktuGerak = 3;
	dx = 1;
	dy = -1;

}

void Spinosaurus::gerak() {
	posisiX += dx;
	posisiY += dy;
}
