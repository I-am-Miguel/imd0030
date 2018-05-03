#include <iostream>
#include <memory>
#include "dado.h"

void funcA(std::shared_ptr<Dado> _dado);
void funcB(std::shared_ptr<Dado> _umDado);

int main(int argc, char const *argv[])
{
	int * x = nullptr;
	int a = 89;
	x = &a;

	std::cout << "Endereco de x = " << &x << std::endl;
	std::cout << "Valor de x = " << x << std::endl;
	std::cout << "Endereco de a = " << &a << std::endl;
	std::cout << "Valor apontado por x = " << *x << std::endl;

	std::unique_ptr<Dado> u_ptr = std::make_unique<Dado>();
	auto d1 = new Dado();
	std::shared_ptr<Dado> s_ptr1(d1);
	funcA (s_ptr1);
	std::shared_ptr<Dado> s_ptr2(d1);
	funcB (s_ptr2);
	return 0;
}

void funcA(std::shared_ptr<Dado> _dado)
{
	funcB (_dado);
	std::cout << "Valor em A: " << (*_dado) << std::endl;
}

void funcB(std::shared_ptr<Dado> _umDado) {
	std::cout << "Valor em B: " << (*_umDado) << std::endl;
}