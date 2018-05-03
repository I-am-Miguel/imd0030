#ifndef _DADO_H_
#define _DADO_H_

#include <random>

class Dado {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		Dado ();
		Dado (int val);
		Dado (Dado const &d);
		int jogar();
		int getValor();
		Dado operator+ (Dado &d);
		friend std::ostream& operator<< (std::ostream &o, Dado const d);

};

#endif