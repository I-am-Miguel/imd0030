#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <iostream> 
#include <string>
#include "aluno.h"

class Aluno {
private:
	std::string matricula;
	std::string nome;
public:
	Aluno();
	Aluno(std::string _matricula, std::string _nome);
	// getters
	std::string getNome();
	std::string getMatricula();
	// setters 
	void setNome(std::string _nome);
	void setMatricula(std::string _matricula);
	friend std::ostream& operator<<(std::ostream& os, const Aluno& _aluno) {
        return os << _aluno.nome << " - [" << _aluno.matricula << "] ";
    }
    friend bool operator== (Aluno &a1, Aluno &a2){
    	std::cout << "Comparando " << a1 << " com aluno " << a2 << std::endl;
    	return (a1.nome == a2.nome && a1.matricula == a2.matricula);
    }
};

class AlunoTurma {
private:
	Aluno* discente;
	int faltas;
	double nota;
public:
	AlunoTurma();
	AlunoTurma(Aluno* _discente, int _faltas, double _nota);
	// getters
	Aluno* getDiscente();
	std::string getNome();
	std::string getMatricula();
	int getFaltas();
	double getNota();
	// setters 
	void setNome(std::string _nome);
	void setMatricula(std::string _matricula);
	void setFaltas(int _faltas);
	void setNota(double _nota);
	friend std::ostream& operator<<(std::ostream& os, const AlunoTurma& _alunoturma) {
        return os << (*_alunoturma.discente) << " {F: " << _alunoturma.faltas << " Nota: " << _alunoturma.nota << "}";
    }
};

#endif

