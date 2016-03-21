#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <cstdlib>
#include "makhluk.h"
#include "herbs.h"

class Board
{
public:
    static Board* Instance();
    void TampilkanBoard();
    void MasukkanMakhluk(Makhluk* Mh);
    void HapusMakhluk(Makhluk* Mh,int _absis,int _ordinat);
    int cekMakhluk(int _absis,int _ordinat);
    char cekBentuk (int _absis, int _ordinat);
    void battle (int _absis,int _ordinat, Makhluk* moveableMakhluk);
    //Herbs* getHerbs(int _absis,int _ordinat);
    Makhluk* getMakhluk(int _absis,int _ordinat);
   	void HapusMakhlukForce(Makhluk* Mh);
   	void ScreenShoot();

private:
    Board();
    Makhluk* kotak[37][151];
    
    static Board* Addr;
};

#endif // BOARD_H
