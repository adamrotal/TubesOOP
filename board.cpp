#include "board.h"
#include <iostream>
#include <mutex>
#include <unistd.h>

using namespace std;

mutex m;

Board* Board::Addr=NULL;

Board* Board::Instance(){
    if(Addr==NULL){
        Addr=new Board();
    }

    return Addr;
}

Board::Board()
{
    for(int i=0;i<37;i++)
        for(int j=0;j<151;j++)
            kotak[i][j]=NULL;
}

void Board::TampilkanBoard()
{
    for(int i=0;i<37;i++){
        for(int j=0;j<151;j++)
            if(kotak[i][j]==NULL){
                cout<<" ";
            }else{
                kotak[i][j]->muncul();
            }
        cout<<endl;
    }
}

void Board::MasukkanMakhluk(Makhluk* Mh){
    int absis=Mh->getAbsis();
    int ordinat=Mh->getOrdinat();

    kotak[ordinat][absis]=Mh;
}

void Board::HapusMakhluk(Makhluk* Mh,int _absis,int _ordinat){
    if(kotak[_ordinat][_absis]==Mh){
        kotak[_ordinat][_absis]=NULL;
    }
}

int Board::cekMakhluk(int _absis,int _ordinat){
    //1 Dinosaurus
    //2 Tumbuhan
    //0 Tidak ada

    if(kotak1[_ordinat][_absis]==NULL){
        return 0;
    }else{
        return kotak1[_ordinat][_absis]->getKlasifikasi();    
    }
    
}

bool Board::isPosisiOk(int _absis, int _ordinat) {
    if (_absis >= 37 || _ordinat >= 151) {
        return false;
    } else {
        return true;
    }
}

void Board::copyBoard(){
    while(1){
        m.lock();
        for(int i=0;i<37;i++)
            for(int j=0;j<151;j++)
                kotak1[i][j]=kotak[i][j];
        m.unlock();
        sleep(1);            
    }
}
