#include "kentrosaurus.h"
#include <iostream>
using namespace std;

Kentrosaurus::Kentrosaurus(int X, int Y) {
	posisiX = X;
	posisiY = Y;
	umur = 0;
	exp = 500;
	bentuk = '&';
	waktuGerak = 4;
	dx = 2;
	dy = 0;
	
}

void Kentrosaurus::gerak() {
	posisiX = dx + posisiX;
	posisiY = dx + posisiY;
	
}

void Kentrosaurus::muncul() {
	cout<<"<"<<posisiX<<","<<posisiY<<">"<<endl;
}
