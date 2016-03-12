

#ifndef MAKHLUK_H
#define MAKHLUK_H


class Makhluk{
	//This is Abstract Class
	//The Highest level of abstract class
	public:
		//Constructor
		Makhluk();
		//Destructor
		~Makhluk();
		//Method
		void muncul();
		int getAbsis();
		int getOrdinat();
		int getKlasifikasi();
		virtual void hidup()=0;
	protected:
		int umur;
		int exp;
		int posisiX;
		int posisiY;
		char bentuk;
	private:
		static int jumlah; //Jumlah Mahkluk 
};

#endif
