#include "brontosaurus.h" 
#include <iostream>

using namespace std;


Brontosaurus::Brontosaurus(int a, int b) {
	posisiX = a;
	posisiY = b;
	
	umur = 0;
	exp = 400;
	bentuk = 'B';
	waktuGerak = 6;
	dx = 1;
	dy = -1;
	cout<<"ROAR! I've appeared on "<<"("<<a<<","<<b<<")"<<endl;
}

void Brontosaurus::gerak() {
	posisiX += dx;
	posisiY += dy;
}
