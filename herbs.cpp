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
    bentuk='0';
    while(exp>0){
    	if(!shield){
    		bentuk=bentukAsli;
    		sleep(waktu_regenerasi);
    		shield=true;
    		bentuk='0';
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
