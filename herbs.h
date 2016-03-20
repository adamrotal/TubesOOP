#ifndef HERBS_H_
#define HERBS_H_

#include "tumbuhan.h"

class Herbs : public tumbuhan {
	//This is Abstract Class
	//The 3rd level of abstract class
	public:
		//Method
		/*virtual*/ 
		void regenerasi_shield();
		void hidup();
		void hapusShield();

		friend class Makhluk;

	protected:
		bool shield;
		char bentukAsli;
		int waktu_regenerasi;
};

#endif