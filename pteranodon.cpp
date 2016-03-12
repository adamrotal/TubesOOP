#include "pteranodon.h"
#include <iostream>
using namespace std;

Pteranodon::Pteranodon(int X, int Y) {
	posisiX = X;
	posisiY = Y;
	umur = 0;
	exp = 500;
	bentuk = '&';
	waktuGerak = 4;
	dx = 2;
	dy = 0;
	
}

void Pteranodon::gerak() {
	posisiX = dx + posisiX;
	posisiY = dx + posisiY;
	
}

void Pteranodon::muncul() {
	cout<<"<"<<posisiX<<","<<posisiY<<">"<<endl;
}
