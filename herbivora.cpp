#include "herbivora.h"
#include "board.h"
#include "makhluk.h"
#include "herbs.h"
#include <unistd.h>
using namespace std;

void Herbivora::makan() {
	Board* B;
    B=Board::Instance();
	switch (B->cekMakhluk(this->getAbsis(), this->getOrdinat())) {
		case 0 : {
			//donothing
		}
		case 1 : {
			switch (B->cekBentuk(this->getAbsis(), this->getOrdinat())) {
				case 'G' : {
					this->exp = 0;		
				}
				case 'N' : {
					this->exp = 0;		
				}
				case 'S' : {
					B->battle(this->getAbsis(), this->getOrdinat(), this);
				}
				case 'B' : {
					B->battle(this->getAbsis(), this->getOrdinat(), this);			
				}
				case 'K' : {
					this->exp = 0;		
				}
				case 'P' : {
					this->exp = 0;		
				}
			}
		}
		case 2 : {
			switch (B->cekBentuk(this->getAbsis(), this->getOrdinat())) {
				case '0' : {
					this->exp = 0;
					Makhluk* M = B->getMakhluk(this->getAbsis(), this->getOrdinat());
					M->hapusShield();
				} 
				case '1' : {
					Makhluk* M = B->getMakhluk(this->getAbsis(), this->getOrdinat());
					M->killMakhluk();
				} 
				case '4' : {
					Makhluk* M = B->getMakhluk(this->getAbsis(), this->getOrdinat());
					M->killMakhluk();
				}
				default : {
					this->exp = 0;
				}
			}
		}
	}
	
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
