#include <iostream>
#include <memory>

void imprime(std::shared_ptr<int> valor) {
	std::cout << "Valor recebido: " << (*valor) << std::endl;
}

int main(int argc, char const *argv[])
{
	std::shared_ptr<int> ptr1 = std::make_shared<int>(33);
	imprime(ptr1);
	std::cout << (*ptr1) << std::endl;
	return 0;
}

