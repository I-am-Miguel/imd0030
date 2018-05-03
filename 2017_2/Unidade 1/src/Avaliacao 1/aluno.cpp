#include <string>
#include "aluno.h"

/** Classe Aluno **/

Aluno::Aluno() {
	matricula = "00000";
	nome = "Desconhecido";
}

Aluno::Aluno(std::string _matricula, std::string _nome):
	matricula(_matricula), nome(_nome) {}

std::string 
Aluno::getNome(){
	return nome;
}

std::string 
Aluno::getMatricula(){
	return matricula;
}

void 
Aluno::setNome(std::string _nome){
	nome = _nome;
}

void 
Aluno::setMatricula(std::string _matricula){
	matricula = _matricula;
}

/** Classe AlunoTurma **/

AlunoTurma::AlunoTurma(){
	//discente = NULL;
	faltas = 0;
	nota = 0.00;
}

AlunoTurma::AlunoTurma(Aluno* _discente, int _faltas, double _nota):
	discente(_discente), faltas(_faltas), nota(_nota) {}

// getters
Aluno* 
AlunoTurma::getDiscente() {
	return discente;
}

std::string 
AlunoTurma::getNome(){
	return discente->getNome();
}

std::string 
AlunoTurma::getMatricula(){
	return discente->getMatricula();
}

int 
AlunoTurma::getFaltas(){
	return faltas;
}

double 
AlunoTurma::getNota(){
	return nota;
}

// setters 
void 
AlunoTurma::setNome (std::string _nome){
	discente->setNome (_nome);
}

void 
AlunoTurma::setMatricula (std::string _matricula){
	discente->setMatricula (_matricula);
}

void 
AlunoTurma::setFaltas(int _faltas){
	faltas = _faltas;
}

void 
AlunoTurma::setNota(double _nota){
	nota = _nota;
}
