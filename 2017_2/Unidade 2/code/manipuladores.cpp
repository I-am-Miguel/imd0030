#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int valor = 11;
	string label = "valor: ";
	std::cout << std::hex << std::showbase
              << label << valor << endl
              << std::uppercase << label << valor << endl
              << std::nouppercase << label << valor << endl;
    
    std::istringstream input("Testando a implementacao;1;2;3.5;");

	std::string token;

	while( std::getline( input, token, ';' ) )
	{
	    std::cout << token << std::endl;
	}
    cout << token << endl;
   	
   	return 0;
}
