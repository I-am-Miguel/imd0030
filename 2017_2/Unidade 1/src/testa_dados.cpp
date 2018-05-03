#include <iostream>
#include <cstdlib>
#include "dado.h"

int main(int argc, char const *argv[])
{
	Dado dado1;
	Dado dado2;
	for (int i=0; i<10; ++i)
	{
		std::cout << dado1.getValor() << "+" << dado2.getValor() << "=" << (dado1+dado2).getValor() << std::endl;
		dado1.jogar();
		dado2.jogar();
	}
	//std::cout << (dado1+dado2).getValor() << std::endl;
	//std::cout << dado1.getValor() << std::endl;
	//std::cout << dado1 << std::endl;
	return 0;
}