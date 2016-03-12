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
    int cekMakhluk(int _absis,int _ordinat);

private:
    Board();
    Makhluk* kotak[37][151];
    static Board* Addr;
};

#endif // BOARD_H
