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
    bentukAsli = '4';
    waktu_regenerasi = 10;
}
