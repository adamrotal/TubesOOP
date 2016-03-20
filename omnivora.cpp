#include "omnivora.h"
#include "board.h"
#include <unistd.h>
using namespace std;

void Omnivora::makan() {
	switch (Board::cekMakhluk(this->getAbsis(), this->getOrdinat())) {
		case 0 : {
			//donothing
		}
		case 1 : {
			switch (Board::cekBentuk(this->getAbsis(), this->getOrdinat())) {
				case 'G' : {
					Board::battle(this->getAbsis(), this->getOrdinat(), this);		
				}
				case 'N' : {
					Board::battle(this->getAbsis(), this->getOrdinat(), this);		
				}
				case 'S' : {
					//do nothing
				}
				case 'B' : {
					//do nothing			
				}
				case 'K' : {
					Board::battle(this->getAbsis(), this->getOrdinat(), this);		
				}
				case 'P' : {
					Board::battle(this->getAbsis(), this->getOrdinat(), this);		
				}
			}
		}
		case 2 : {
			
		}
	}
	
}

void Omnivora::gerak() {
	//int oldAbsis = this->getAbsis();
	//int oldOrdinat = this->getOrdinat();
	switch(Dinosaurus::BFS(3)) {
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

	//Board* B;
    //B=Board::Instance();    
    //B->HapusMakhluk(this,oldAbsis,oldOrdinat);

	
}

void Omnivora::hidup(){
	int oldOrdinat;
	int oldAbsis;
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
