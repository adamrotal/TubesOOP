#include <iostream>
#include <unistd.h>
#include "FazaMalu.h"

using namespace std;

//constructor
FazaMalu::FazaMalu(int x, int y) {
    umur = 0;
    exp = 100;
    posisiX = x;
    posisiY = y;
    bentuk = 'Z';
}

//Method
void FazaMalu::regenerasi_shield() {
    if (!shield) {
        sleep(10);   //recharge for 10s
        shield = true;  //reset shield
    } else {    //shield on
        //do nothing
    }
}
/*
void FazaMalu::show_data () {
    cout << "Usia   : " << umur << endl;
    cout << "Exp    : " << exp << endl;
    cout << "Pos X  : " << posisiX << endl;
    cout << "Pos Y  : " << posisiY << endl;
    cout << "Shape  : " << bentuk << endl;
}*/
