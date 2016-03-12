#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <thread>
#include <list>
#include "board.h"
#include "makhluk.h"
#include "dinosaurus.h"
#include "tumbuhan.h"
#include "karnivora.h"
#include "omnivora.h"
#include "herbivora.h"
#include "predator.h"
#include "herbs.h"
#include "spinosaurus.h"
#include "gigantosaurus.h"
#include "kentrosaurus.h"
#include "pteranodon.h"
#include "stegosaurus.h"
#include "brontosaurus.h"
#include "FajarFlyTrap.h"
#include "KantungAdam.h"
#include "FazaMalu.h"
#include "RaflesiaArudi.h"
#include <unistd.h>
#include <time.h>


using namespace std;

//tumbuhan angka hewan huruf dalam bentuk char
/*void sleep(unsigned int msseconds){
    clock_t goal = msseconds+clock();
    while(goal>clock());
}*/

int getRandomAbsis() {
	srand (time(NULL));
	int y = rand() % 151;         // x in the range 1 to 40
	return y;
}

int getRandomOrdinate() {
	srand (time(NULL));
	int x = rand() % 37;         // y in the range 1 to 20
	return x;
}

Makhluk& createObject() {
	Makhluk* M;
	int i;
	i = rand()%10 +1;
	switch (i) {
		case 1 :{
			M = new Spinosaurus(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 2 :{
			M = new Gigantosaurus(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 3 :{
			M = new Pteranodon(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 4 :{
			M = new Kentrosaurus(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 5 :{
			M = new Stegosaurus(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 6 :{
			M = new Brontosaurus(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 7 :{
			M = new FajarFlyTrap(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 8 :{
			M = new KantungAdam(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 9 :{
			M = new FazaMalu(getRandomAbsis(),getRandomOrdinate());
			break;
		}
		case 10 :{
			M = new RaflesiaArudi(getRandomAbsis(),getRandomOrdinate());
			break;
		}
	}
	return *M;
}

void createThread() {
	
	
	
	
}

int main()
{
//    list<Makhluk> Creatures;
	Makhluk* M = new RaflesiaArudi(getRandomAbsis(),getRandomOrdinate());
	//M = createObject();
	Board* B;
    B=Board::Instance();
    B->MasukkanMakhluk(M);

	while(1){
        B->TampilkanBoard();
	//	M = createObject();
        sleep(1000);
    }
}

//mainhaha
