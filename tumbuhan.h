#ifndef TUMBUHAN_H_
#define TUMBUHAN_H_

#include "makhluk.h"

class tumbuhan : public Makhluk
{
	//This is Abstract Class
	//The 2nd level of abstract class
	public:
        //constructor
		tumbuhan();
		virtual void hidup()=0;
		//Method
};

#endif
