#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

class Bebida : public Produto
{
public:
	Bebida();
	Bebida(std::string _codigo, std::string _descricao, double _preco, 
			double _teor_alcoolico);
	~Bebida();
private:
	double m_teor_alcoolico;
public:
	// getters
	double getTeorAlcoolico();
	// setters
	void setTeorAlcoolico(double _teor_alcoolico);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif