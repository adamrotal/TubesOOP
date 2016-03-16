//implementasi
#include "herbs.h"
#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;


void Herbs::regenerasi_shield() {
	/*
    shield = true;
    cout << "regenerasi sukses" << endl;*/
    while(exp>0){
    	if(!shield){
    		sleep(waktu_regenerasi);
    		shield=true;
    	}
    }
}

void Herbs::hidup(){
	std::thread t(&Herbs::regenerasi_shield,this);
    shield=true;
    while(exp>0){
        sleep(2);
        exp--;
    }

    t.join();
}
