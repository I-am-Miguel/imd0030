#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <string>

class Aluno {
private:
	std::string matricula;
	std::string nome;
	int faltas;
	double nota;
public:
	Aluno();
	Aluno(std::string _matricula, std::string _nome);
};

class AlunoTurma {
private:
	Aluno* discente;
	int faltas;
	double nota;
public:
	AlunoTurma();
	AlunoTurma(Aluno* _discente, int _faltas, double _nota);
	Aluno* getDiscente();
};

#endif