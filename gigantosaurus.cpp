#include "gigantosaurus.h"
#include <iostream>
using namespace std;

Gigantosaurus::Gigantosaurus(int X, int Y) {
	posisiX = X;
	posisiY = Y;
	umur = 0;
	exp = 500;
	bentuk = '&';
	waktuGerak = 4;
	dx = 2;
	dy = 0;
	
}

void Gigantosaurus::gerak() {
	posisiX = dx + posisiX;
	posisiY = dx + posisiY;
	
}

void Gigantosaurus::muncul() {
	cout<<"<"<<posisiX<<","<<posisiY<<">"<<endl;
}
