#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
	std::unique_ptr<int> ptr1 = std::make_unique<int>(25);
	std::unique_ptr<int> ptr2(nullptr);
	std::cout << (*ptr1) << std::endl;
	// ptr2 = ptr1; // Causaria erro!
	ptr2 = std::move(ptr1); // É preciso transferir a posse
	//std::cout << (*ptr1) << std::endl; // Causaria erro! 
	std::cout << (*ptr2) << std::endl; 
	return 0;
}

