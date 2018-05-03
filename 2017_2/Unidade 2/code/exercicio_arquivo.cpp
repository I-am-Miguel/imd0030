#include <iostream>		// cin, cout, cerr
#include <fstream> 		// Arquivos
#include <vector>  		// Vector
#include <memory>		// Ponteiros inteligentes
#include <algorithm>	// Algoritmos da STL: accumulate
#include <iomanip>		// Modificadores: setprecision, fixed

using namespace std;

class Aluno
{
private:
	string nome;
	vector<double> notas;
public:
	Aluno() {}
	~Aluno() {}
	
	string getNome() { return nome; }
	vector<double> getNotas() { return notas; }

	double getMedia() {
		return 1.0 * std::accumulate(notas.begin(), notas.end(), 0LL) / notas.size();
	}

	string getStatus() {
		double media = getMedia();
		if (media > 0.0 && media < 5.0) return string("Reprovado");
		else if (media >= 5.0 && media < 7.0) return string("Aprovado por Nota");
		else if (media > 7.0 && media <= 10.0) return string("Aprovado por Media");
		else return string("ERRO");
	}
	int printCSV (ostream& os) {
		os << this->nome << ";" 
	    	<< std::fixed << std::setprecision(1) 
	    	<< this->notas.at(0) << ";"
	    	<< this->notas.at(1) << ";"
	    	<< this->notas.at(2) << ";"
	    	<< this->getMedia() << ";" << this->getStatus() << ";";
		return 0;
	}
	friend istream& operator >> (istream& is, Aluno& _aluno)
	{
	    if (std::getline(is, _aluno.nome, ';')) {
	    	string token;
		    std::getline(is, token, ';');
		    _aluno.notas.push_back(stod(token));
			std::getline(is, token, ';');
		    _aluno.notas.push_back(stod(token));
			std::getline(is, token);
		    _aluno.notas.push_back(stod(token));
	    }
	    
	    return is;
	}
	friend ostream& operator << (ostream& os, Aluno& _aluno)
	{
	    os << _aluno.nome << " " 
	    	<< std::fixed << std::setprecision(1) 
	    	<< _aluno.getMedia() << " " << _aluno.getStatus();
	    return os;
	}
};

int main(int argc, char const *argv[])
{
	ifstream dados("dados.txt");

	std::string token;
	std::vector<shared_ptr<Aluno>> turma;

	shared_ptr<Aluno> a = make_shared<Aluno>();
	
	while( dados >> (*a) )
	{
	    std::cout << "Lendo os dados de " << a->getNome() 
	    	<< "..." << std::endl;
	    turma.push_back(a);
	    a = make_shared<Aluno>();
	}
	
	for (auto i = turma.begin(); i != turma.end(); ++i)
	{
		cout << (**i) << endl;
	}

	ofstream alterado("dados2.txt");

	for (auto i = turma.begin(); i != turma.end(); ++i)
	{
		(**i).printCSV(alterado);
		alterado << endl;
	}	
	
	return 0;
}