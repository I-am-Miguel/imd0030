#include <iostream>
#include <string>
#include "turma.h"

Turma::Turma() {}

Turma::~Turma() {
	alunos.clear();
}

int 
Turma::addAluno(AlunoTurma _aluno) {
	if (alunos.size()==0) {
		alunos.push_back(_aluno);
		return 0;
	}
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		if ((*(*it).getDiscente()) == (*_aluno.getDiscente())) {
			std::cerr << "ERRO: Aluno ja cadastrado na turma." << std::endl; 
			return -1;
		}
	}
	alunos.push_back(_aluno);
	return 0;
}

Aluno* 
Turma::buscaAlunoPorNome (std::string _nome) {
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		if ((*it).getDiscente()->getNome() == _nome) {
			return (*it).getDiscente();
		}
	}
	return NULL;
}

Aluno* 
Turma::buscaAlunoPorMatricula (std::string _matricula) {
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		if ((*it).getDiscente()->getMatricula() == _matricula) {
			return (*it).getDiscente();
		}
	}
	return NULL;
}

int 
Turma::removeAlunoPorNome (std::string _nome) {
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		if ((*it).getDiscente()->getNome() == _nome) {
			alunos.erase(it);
			return 0;
		}
	}
	return -1;
}

int 
Turma::removeAlunoPorMatricula (std::string _matricula) {
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		if ((*it).getDiscente()->getMatricula() == _matricula) {
			alunos.erase(it);
			return 0;
		}
	}
	return -1;
}

void 
Turma::listaAlunos() {
	for (std::vector<AlunoTurma>::iterator it = alunos.begin(); it != alunos.end(); ++it)
	{
		std::cout << (*it) << std::endl;
	}
}

