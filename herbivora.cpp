#include "herbivora.h"
#include "board.h"
#include <unistd.h>
using namespace std;

void Herbivora::makan() {
	//if satu kotak dengan tumbuhan lain, maka Omnivora akan memakan tumbuhan tersebut
	
}

void Herbivora::gerak() {
	//int oldAbsis = this->getAbsis();
	//int oldOrdinat = this->getOrdinat();
	switch(Dinosaurus::BFS(2)) {
		case 0 : {
			posisiY += 1;
			posisiX += 0;
			break;
		}
		case 1 : {
			posisiY += 1;
			posisiX -= 1;
			break;
		}
		case 2 : {
			posisiY += 0;
			posisiX -= 1;
			break;
		}
		case 3 : {
			posisiY -= 1;
			posisiX -= 1;
			break;
		}
		case 4 : {
			posisiY -= 1;
			posisiX += 0;
			break;
		}
		case 5 : {
			posisiY -= 1;
			posisiX += 1;
			break;
		}
		case 6 : {
			posisiY += 0;
			posisiX += 1;
			break;
		}
		case 7 : {
			posisiY += 1;
			posisiX += 1;
			break;
		}
	}

	/*Board* B;
    B=Board::Instance();    
    B->HapusMakhluk(this,oldAbsis,oldOrdinat);
	*/
	
}

void Herbivora::hidup(){
	int oldAbsis;
	int oldOrdinat;
	Board* B;
    B=Board::Instance();
	while(exp>0){
		oldAbsis = this->getAbsis();
		oldOrdinat = this->getOrdinat();
		gerak();
		if(B->cekMakhluk(getAbsis(),getOrdinat())==0){
			B->MasukkanMakhluk(this);
			B->HapusMakhluk(this,oldAbsis,oldOrdinat);
		}
		sleep(waktuGerak);
	}
}
