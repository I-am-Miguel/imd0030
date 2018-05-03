#include <iomanip>
#include "roupa.h"

Roupa::Roupa() {}

Roupa::Roupa(std::string _codigo, std::string _descricao, double _preco, 
	tSexo _sexo, short _tamanho):
	Produto(_codigo, _descricao, _preco), m_sexo(_sexo), m_tamanho(_tamanho) {}

Roupa::~Roupa() {}

short 
Roupa::getTamanho() {
	return m_tamanho;
}

tSexo 
Roupa::getSexo() {
	return m_sexo;
}

void 
Roupa::setTamanho(short _tamanho) {
	m_tamanho = _tamanho;
}

void 
Roupa::setSexo(tSexo _sexo) {
	m_sexo = _sexo;
}

std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) <<  std::setprecision(3) << m_preco << " | "
		<< std::setfill (' ') << std::setw (5) << ((m_sexo==tsMasculino)?"M":"F") << " | "
		<< std::setfill (' ') << std::setw (5) << m_tamanho;
	return o;
}