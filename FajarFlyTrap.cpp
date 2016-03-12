#include <iostream>
#include "FajarFlyTrap.h"

using namespace std;

//constructor
FajarFlyTrap::FajarFlyTrap(int x, int y) {
    umur = 0;
    exp = 100;
    posisiX = x;
    posisiY = y;
    bentuk = 'F';
}

//Method
void FajarFlyTrap::makan() {
    cout << "Implementasi makan kelas ini sudah diimplementasikan di kelas predator" << endl;
}

void FajarFlyTrap::show_data () {
    cout << "Usia   : " << umur << endl;
    cout << "Exp    : " << exp << endl;
    cout << "Pos X  : " << posisiX << endl;
    cout << "Pos Y  : " << posisiY << endl;
    cout << "Shape  : " << bentuk << endl;
}
