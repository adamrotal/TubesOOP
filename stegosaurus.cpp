#include "stegosaurus.h"
#include "board.h"
#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;


Stegosaurus::Stegosaurus(int x, int y) {
	posisiX = x;
	posisiY = y;
	
	umur = 0;
	exp = 700;
	bentuk = 'S';
	waktuGerak = 4;
	//dx = 2;
	//dy = -1;
}



	
/*void Stegosaurus::gerak() {
	posisiX += dx;
	posisiY += dy;
}*/
