#ifndef KARNIVORA_H
#define KARNIVORA_H

#include "dinosaurus.h"
#include "board.h"

class Karnivora : public Dinosaurus {
	public:
		void makan();
		void gerak();
};

#endif
