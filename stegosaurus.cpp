#include "stegosaurus.h"
#include <iostream>
using namespace std;


Stegosaurus::Stegosaurus(int a, int b) {
	posisiX = a;
	posisiY = b;
	
	umur = 0;
	exp = 700;
	bentuk = 'S';
	waktuGerak = 4;
	dx = 2;
	dy = -1;
}
	
void Stegosaurus::gerak() {
	posisiX += dx;
	posisiY += dy;
}
