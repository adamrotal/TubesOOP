#include <iostream>
#include "KantungAdam.h"

using namespace std;

//constructor
KantungAdam::KantungAdam(int x, int y) {
    umur = 0;
    exp = 100;
    posisiX = x;
    posisiY = y;
    bentuk = 'A';
}

//Method
void KantungAdam::makan() {
    cout << "Implementasi makan kelas ini sudah diimplementasikan di kelas predator" << endl;
}

void KantungAdam::show_data () {
    cout << "Usia   : " << umur << endl;
    cout << "Exp    : " << exp << endl;
    cout << "Pos X  : " << posisiX << endl;
    cout << "Pos Y  : " << posisiY << endl;
    cout << "Shape  : " << bentuk << endl;
}
