#ifndef PREDATOR_H_
#define PREDATOR_H_

#include "tumbuhan.h"

class predator : public tumbuhan
{
	//This is Abstract Class
	//The 2nd level of abstract class
	public:
        //constructor
		predator();

		//Method
		virtual void makan();
		
};

#endif
