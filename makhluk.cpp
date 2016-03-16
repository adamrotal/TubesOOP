#include "makhluk.h"
#include <iostream>
using namespace std;

Makhluk::Makhluk() {
	//Mahkluk Constructor
	jumlah++;
	
}

Makhluk::~Makhluk() {
	//destruktor makhluk;
	jumlah--;
}

void Makhluk::muncul() {
	cout<<bentuk;	
}

int Makhluk::getAbsis(){
	return posisiY;
}

int Makhluk::getOrdinat(){
	return posisiX;
}

int Makhluk::getKlasifikasi(){
	if((bentuk>='0')&&(bentuk<='9')){
		return 2;
	}else{
		return 1;
	}
}

int Makhluk::getJumlahMakhluk(){
	return jumlah;
}
int Makhluk::jumlah = 0;
//Inisialisasi static data member dari kelas 
