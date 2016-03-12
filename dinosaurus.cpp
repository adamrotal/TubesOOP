#include "dinosaurus.h"
#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
#include "board.h"
using namespace std;
typedef pair<int,int> ii;

void Dinosaurus::makan() {
	//Memakan Mahkluk lain
	
}

int Dinosaurus::DFS(int makanan){
	bool visit[37][151];
	memset(visit,false,sizeof(visit));
	bool keluar=false;
	int final_absis;
	int final_ordinat;
	int d_absis[]={1,0,-1,0};
	int d_ordinat[]={0,-1,0,1};
	int _absis=this->getAbsis();
	int _ordinat=this->getOrdinat();
	int KlasifikasiMh;
	queue<ii> q;
	Board* B;
    B=Board::Instance();
	q.push(ii(_absis,_ordinat));
	ii u;
	while(!q.empty()){
		u=q.front();q.pop();
		for (int k = 0; k < 4; ++k)
        {
            int ny = u.first+dy[k], nx = u.second+dx[k];
            if ((ny >= 0) && (ny < 37) && (nx >= 0) && (nx < 151) && (!visit[ny][nx]))
            {
                KlasifikasiMh=cekMakhluk(nx,ny);
                if (KlasifikasiMh==0)
                {
                    q.push(ii(ny,nx));
                    visit[ny][nx] = true;
                }else if((makanan==3)||(KlasifikasiMh==makanan)){
                	final_absis=nx;
                	final_ordinat=ny;
                	keluar=true;
                	
                }
            }

            if(keluar){
            	break;
            }
        }
	}


	if((_ordinat==final_ordinat)&&(_absis<final_absis)){
		return 0;
	}else if((_ordinat>final_ordinat)&&(_absis<final_absis)){
		return 1;
	}else if((_ordinat>final_ordinat)&&(_absis==final_absis)){
		return 2;
	}else if((_ordinat>final_ordinat)&&(_absis>final_absis)){
		return 3;
	}else if((_ordinat==final_ordinat)&&(_absis>final_absis)){
		return 4;
	}else if((_ordinat<final_ordinat)&&(_absis>final_absis)){
		return 5;
	}else if((_ordinat<final_ordinat)&&(_absis==final_absis)){
		return 6;
	}else if((_ordinat<final_ordinat)&&(_absis<final_absis)){
		return 7;
	}


}



