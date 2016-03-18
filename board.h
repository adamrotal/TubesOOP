#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <cstdlib>
#include "makhluk.h"

class Board
{
public:
    static Board* Instance();
    void TampilkanBoard();
    void MasukkanMakhluk(Makhluk* Mh);
    void HapusMakhluk(Makhluk* Mh,int _absis,int _ordinat);
    int cekMakhluk(int _absis,int _ordinat);
    bool isPosisiOk(int _absis, int _ordinat);
    void copyBoard();

private:
    Board();
    Makhluk* kotak[37][151];
    Makhluk* kotak1[37][151];
    static Board* Addr;
};

#endif // BOARD_H
