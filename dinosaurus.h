#ifndef DINOSAURUS_H
#define DINOSAURUS_H
#include "makhluk.h"

class Dinosaurus : public Makhluk {
	public:
	//Method
	virtual void gerak()=0;
	virtual void makan()=0;
	virtual void hidup()=0;
	
	protected:
	int BFS(int makanan);
	int waktuGerak;
	//int dx;
	//int dy;
	
};
#endif
