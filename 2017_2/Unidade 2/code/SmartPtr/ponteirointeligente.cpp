#include <iostream>

#include "ponteirointeligente.h"

int main(int argc, char const *argv[])
{
	PonteiroInteligente<int> ptr(new int(80));
	std::cout << (*ptr) << std::endl;
	return 0;
}
