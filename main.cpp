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

/*Makhluk& createObject() {
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
	
	
	
	
}*/

int main()
{
//    list<Makhluk> Creatures;
	
	//Makhluk* M = new RaflesiaArudi(10,40);
	//Makhluk* M1 = new Stegosaurus(13,50);
	//Makhluk* M2 = new RaflesiaArudi(10,100);
	//Makhluk* M3 = new FazaMalu(15,50);
	//Makhluk* M4 = new Spinosaurus(14,1);
	Makhluk* M5 = new Brontosaurus(15,31);
	Makhluk* M6 = new Kentrosaurus(16,75);
	//Makhluk* M7 = new Pteranodon(17,94);
	//Makhluk* M8 = new Gigantosaurus(14,80);
	

	//M = createObject();
	Board* B;

    B=Board::Instance();
    //B->MasukkanMakhluk(M);
    //B->MasukkanMakhluk(M1);
    //B->MasukkanMakhluk(M2);
	//B->MasukkanMakhluk(M3);
	//B->MasukkanMakhluk(M4);
	B->MasukkanMakhluk(M5);
	B->MasukkanMakhluk(M6);
	//B->MasukkanMakhluk(M7);
	//B->MasukkanMakhluk(M8);

    
  

    //thread t1 (&Makhluk::hidup,M);
    //thread t2 (&Makhluk::hidup,M1);
    //thread t3 (&Makhluk::hidup,M2);
    //thread t4 (&Makhluk::hidup,M3);
    //thread t5 (&Makhluk::hidup,M4);
    thread t6 (&Makhluk::hidup,M5);
    thread t7 (&Makhluk::hidup,M6);
    //thread t8 (&Makhluk::hidup,M7);
    //thread t9 (&Makhluk::hidup,M8);
    
    //std::thread t2(M1->hidup());
    cout<<endl;
    thread tCopyBoard (&Board::copyBoard,B);
    


	while(Makhluk::getJumlahMakhluk()>1){
        B->TampilkanBoard();
	//	M = createObject();
        sleep(1);
    }

    //t1.join();
    //t2.join();
    //t3.join();
    //t4.join();
    //t5.join();
    t6.join();
    t7.join();
    //t8.join();
    //t9.join();
}

//mainhaha
