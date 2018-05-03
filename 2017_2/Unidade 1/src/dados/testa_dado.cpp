#include <sstream>
#include <iostream>
#include "dado.h"

#define TOT_RODADAS 2

int main(int argc, char const *argv[])
{
	int total_dados;
	
	if (argc != 2) {
		std::cout << "ERRO: quantidade inválida de parâmetros." << std::endl;
		return 1;
	}

	std::stringstream s(argv[1]);
	
	if ((s >> total_dados) && s.eof()) {
		Dado* dados = new Dado[total_dados];
	
		for (int rodada=0;rodada<TOT_RODADAS;++rodada) {
			for (int J=0;J<total_dados;++J)
				std::cout << dados[J] << " ";
			std::cout << std::endl;

			std::cout << "Soma: " << dados[0]+500+dados[1]+dados[2]+dados[3]+300 << std::endl;
			for (int k=0;k<total_dados;++k)
				dados[k].jogar();
		}
	}
	
	return 0;
}