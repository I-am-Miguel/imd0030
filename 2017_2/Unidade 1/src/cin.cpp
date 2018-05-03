#include <iostream>
#include <sstream>

int main()
{
    std::string line;
    int valor;
    std::cout << "Digite um valor inteiro: ";
    while (std::getline(std::cin, line)) // repete a leitura de toda a linha
    {
        std::stringstream ss(line); // cria um stringstream com o conteudo da linha
        if ((ss >> valor) && ss.eof()) 
        {
        	// Tenta extrair um 'inteiro' do stringstream
            // Se extraiu com sucesso e não restou nada mais...
            break; // Sai da repetição
        }
        std::cout << std::endl << "[ERRO] Entrada invalida! " << std::endl << std::endl;
        std::cout << "Digite um valor inteiro: ";
    }
    std::cout << std::endl << "[OK] Entrada valida: " << valor << std::endl;
}