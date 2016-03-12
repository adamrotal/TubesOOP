#ifndef HERBS_H_
#define HERBS_H_

#include "tumbuhan.h"

class Herbs : public tumbuhan {
	//This is Abstract Class
	//The 3rd level of abstract class
	public:
		//Method
		virtual void regenerasi_shield();


	protected:
		bool shield;
		double waktu_regenerasi;
};

#endif