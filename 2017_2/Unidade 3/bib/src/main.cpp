#include <iostream>
#include <vector>
#include <memory>
#include "produtos.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));
	lista.push_back(make_shared<Bebida>("001002007-01","51",12.60, 14.5));
	lista.push_back(make_shared<Roupa>("003332008-00","Camisa Polo",76.00,tsFeminino,32));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}

	return 0;
}