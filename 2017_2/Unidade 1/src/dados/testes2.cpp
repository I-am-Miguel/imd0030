#include <sstream>
#include <iostream>
#include "dado.h"

#include <vector>

int main(int argc, char const *argv[])
{
	// Totalmente C...
	Dado d[5];
	for(int i=0; i<5; ++i) {
		std::cout << d[i] << std::endl;
	}

	// Mistura mais proxima do C...
	std::vector<Dado> dados(5);
	for(int i=0; i<5; ++i) {
		std::cout << dados[i] << std::endl;
	}
	// Mistura mais proxima do C++...
	std::vector<Dado*> muitosDados;
	muitosDados.push_back(new Dado()); 
	muitosDados.push_back(new Dado());
	muitosDados.push_back(new Dado());
	
	for (int i = 0; i < (int) muitosDados.size(); ++i)
    	std::cout << (*muitosDados[i]) << std::endl;

	// Totalmente C++...
	for (std::vector<Dado*>::iterator it = muitosDados.begin(); it < muitosDados.end(); ++it)
    	std::cout << (**it) << std::endl;

	return 0;
}