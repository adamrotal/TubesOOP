#include "karnivora.h"

#ifndef SPINOSAURUS_H
#define SPINOSAURUS_H

class Spinosaurus : public Karnivora{
	public:
		//ctor
		Spinosaurus(int a,int b);
		
		//implementasi
		void gerak();
	
};

#endif