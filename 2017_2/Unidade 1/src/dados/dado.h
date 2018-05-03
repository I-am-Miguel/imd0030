#ifndef _DADO_H_
#define _DADO_H_

#include <random>
#include <ostream>

class Dado {
	private:
		int valor;

	public:
		static std::random_device rd;
		static std::mt19937 gen;
		static std::uniform_int_distribution<> dis;
		Dado();
		Dado(int val);
		int jogar();
		int getValor();
		friend std::ostream& operator<< (std::ostream &o, Dado const &d);
		Dado operator+(const Dado &d) const;
		int operator+(const int &val) const;
		// Overloaded int cast
    	operator int();
};

#endif