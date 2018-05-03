#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"

enum tSexo
{
	tsMasculino,
	tsFeminino
};

class Roupa : public Produto
{
public:
	Roupa();
	Roupa(std::string _codigo, std::string _descricao, double _preco, 
			tSexo _sexo, short _tamanho);
	~Roupa();
private:
	tSexo m_sexo;
	short m_tamanho;
public:
	// getters
	short getTamanho();
	tSexo getSexo();
	// setters
	void setTamanho(short _tamanho);
	void setSexo(tSexo _sexo);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif