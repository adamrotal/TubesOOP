#include "board.h"
#include <iostream>
#include <mutex>
#include <unistd.h>
#include <fstream>

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

    if(kotak[_ordinat][_absis]==NULL){
        return 0;
    }else{
        return kotak[_ordinat][_absis]->getKlasifikasi();    
    }
    
}


char Board::cekBentuk (int _absis, int _ordinat) {
    return kotak[_ordinat][_absis]->getBentuk();
}

void Board::battle (int _absis,int _ordinat, Makhluk* moveableMakhluk) {

}
/*
Herbs* Board::getHerbs(int _absis,int _ordinat) {
    return kotak[_ordinat][_absis];
}
*/
Makhluk* Board::getMakhluk(int _absis,int _ordinat) {
    return kotak[_ordinat][_absis];
}

void Board::HapusMakhlukForce(Makhluk* Mh){
    m.lock();
    for(int i=0;i<37;i++)
        for(int j=0;j<151;j++)
            if(kotak[i][j]==Mh)
                kotak[i][j]=NULL;
    m.unlock();
}

void Board::ScreenShoot() {
	ofstream outfile;
	outfile.open("ScreenShoot.txt");
	for(int i=0;i<37;i++){
        for(int j=0;j<151;j++)
            if(kotak[i][j]==NULL){
                outfile<<" ";
            }else{
                outfile<<kotak[i][j]->getBentuk();
            }
        outfile<<endl;
    }
    outfile.close();
	
}
