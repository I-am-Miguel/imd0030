#include <algorithm>
using std::find_if;

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

bool maiorQue60 (int valor) {
	return 60 < valor;
}

class MaiorQue
{
	int valor;
public:
	MaiorQue(int n):valor(n) {}
	bool operator()(int n) const { return n > valor; }
};

int main() {
    // Vetor de inteiros
    vector<int> valores { 2, 44, 56, 13, 88, 78, 90, 3, 4, 5 };

    // Encontra a primeira ocorrência maior que 60 usando uma função como predicado
    auto it = find_if(valores.begin(), valores.end(), maiorQue60);
    if (it != valores.end()) {
        cout << "Primeiro valor: " << (*it) << endl;
    } else {
    	cout << "Nao ha valores que satisfacam o predicado. " << endl;
    }
    // Encontra a primeira ocorrência maior que 89 usando uma functor como predicado
	it = find_if(valores.begin(), valores.end(), MaiorQue(89));
    if (it != valores.end()) {
        cout << "Primeiro valor: " << (*it) << endl;
    } else {
    	cout << "Nao ha valores que satisfacam o predicado. " << endl;
    }    

    return 0;
}
