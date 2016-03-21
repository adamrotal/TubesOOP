//implementasi
#include "herbs.h"
#include "board.h"
#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;


void Herbs::regenerasi_shield() {
	/*
    shield = true;
    cout << "regenerasi sukses" << endl;*/
    bentuk='0';
    bool keluar;
    while(exp>0){
    	if(!shield){
    		bentuk=bentukAsli;
            for(int i=0;i<waktu_regenerasi;i++){
                if(exp<=0)
                    break;
                else
                    sleep(1);
            }
    		//sleep(waktu_regenerasi);
    		shield=true;
    		bentuk='0';
    	}
    }
    
}

void Herbs::hapusShield() {
    shield = false;
}

void Herbs::hidup(){
	std::thread t(&Herbs::regenerasi_shield,this);
    shield=true;
    while(exp>0){
        for(int i=0;i<2;i++){
            if(exp<=0)
                break;
            else
                sleep(1);
        }
        exp--;
    }
    //cout<<"Berasil"<<endl;
    t.join();
    
    

}
