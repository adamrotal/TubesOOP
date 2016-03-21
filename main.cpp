#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <thread>
#include <list>
#include <sys/ioctl.h> 
#include <termios.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <mutex>

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


using namespace std;

//tumbuhan angka hewan huruf dalam bentuk char
/*void sleep(unsigned int msseconds){
    clock_t goal = msseconds+clock();
    while(goal>clock());
}*/


int keyStroke() {
    static bool flag = false;
    static const int STDIN = 0;

    if (!flag) {
        //Memakai termios untuk mematikan line buffering
        struct termios T;

        tcgetattr(STDIN, &T);
        T.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &T);
        setbuf(stdin, NULL);
        flag = true;
    }

    int NByte;
    ioctl(STDIN, FIONREAD, &NByte);  // STDIN = 0
    
    return NByte;
}

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

void cekMakhlukHidup(Makhluk* M[],int banyakMakhluk){

	mutex m;
	Board* B;
	B=Board::Instance();
	bool *hidup = new bool[banyakMakhluk];
	//inisialisasi
	for(int i=0;i<banyakMakhluk;i++){
		hidup[i]=true;
	}

	while(Makhluk::getJumlahMakhluk()>1){
		for(int i=0;i<banyakMakhluk;i++){
			if(hidup[i]==true){
				if(M[i]->getExp()<=0){
					sleep(2);
					B->HapusMakhlukForce(M[i]);
					delete M[i];
					hidup[i]=false;
				}
			}
		}
	}

	sleep(1);
	for(int i=0;i<banyakMakhluk;i++){
		if(hidup[i]==true){
			M[i]->killMakhluk();
		}
	}

	delete[] hidup; 
	//cout<<menang<<endl;

	
}

int main()
{
	
//    list<Makhluk> Creatures;
	Makhluk* M[3];
	//Makhluk* M = new RaflesiaArudi(10,40);
	//Makhluk* M1 = new Stegosaurus(13,100);
	//Makhluk* M2 = new RaflesiaArudi(10,100);
	//Makhluk* M3 = new FazaMalu(15,50);
	//Makhluk* M4 = new Spinosaurus(14,1);
	///Makhluk* M5 = new Brontosaurus(15,31);
	//Makhluk* M6 = new Kentrosaurus(16,75);
	//Makhluk* M7 = new Pteranodon(17,94);
	//Makhluk* M8 = new Gigantosaurus(14,80);
	
	M[0]=new Stegosaurus(13,100);
	M[1]=new RaflesiaArudi(10,100);
	M[2]=new Stegosaurus(17,100);
	//M = createObject();
	Board* B;
    B=Board::Instance();
    //B->MasukkanMakhluk(M);
    B->MasukkanMakhluk(M[0]);
    B->MasukkanMakhluk(M[1]);
	B->MasukkanMakhluk(M[2]);
	//B->MasukkanMakhluk(M4);
	//B->MasukkanMakhluk(M5);
	//B->MasukkanMakhluk(M6);
	//B->MasukkanMakhluk(M7);
	//B->MasukkanMakhluk(M8);

    
  

    //thread t1 (&Makhluk::hidup,M);
    thread t (&cekMakhlukHidup,M,3);
    thread t2 (&Makhluk::hidup,M[0]);
    thread t3 (&Makhluk::hidup,M[1]);
    thread t4 (&Makhluk::hidup,M[2]);
    //thread t5 (&Makhluk::hidup,M4);
    //thread t6 (&Makhluk::hidup,M5);
    //thread t7 (&Makhluk::hidup,M6);
    //thread t8 (&Makhluk::hidup,M7);
    //thread t9 (&Makhluk::hidup,M8);
    
    //std::thread t2(M1->hidup());
    cout<<endl;
    char KeyPressed;
  

	while(Makhluk::getJumlahMakhluk()>1){
        B->TampilkanBoard();
        //cout<<endl;
        //cout<<endl;
        //cout<<endl;
        cout<<Makhluk::getJumlahMakhluk();
	//	M = createObject();
        if (keyStroke()) {
        	
        	KeyPressed = getchar();
		       	switch (KeyPressed) {
        		case 'P' : {
        			cout<<endl<<"PAUSE"<<endl;
        			//fflush(stdout);
        			break;
        		}
        		case 'S' : {
        			cout<<endl<<"Screen Shot"<<endl;
        			break;
        		}
        		case 'B' : {
        			cout<<endl<<"Step By Step"<<endl;
        			break;
        		}

        		default : {
        			cout<<endl;
        			cout<<endl;
        			cout<<endl;
        			
        			break;
        		}
        	}
        }
        sleep(1);
    }

    
    B->TampilkanBoard();
    //t1.join();
    t.join();
    cout<<"keluar";
    //cout<<menang<<endl;
    t2.join();
    t3.join();
    t4.join();
    //t5.join();
    //t6.join();
    //t7.join();
    //t8.join();
    //t9.join();
}

//mainhaha
