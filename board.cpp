#include "board.h"
#include <iostream>

using namespace std;

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
    if(kotak[_ordinat][_absis]==NULL){
        return 0;
    }else{
        return kotak[_ordinat][_absis]->getKlasifikasi();    
    }
    
}
