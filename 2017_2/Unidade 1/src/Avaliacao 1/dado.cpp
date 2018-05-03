#include <random>
#include "dado.h"


Dado::Dado(): rd(), gen{rd()}, dis(1,6) {
	valor = std::round(dis(gen));
}

Dado::Dado (int val) {
	valor = val;
}

Dado::Dado (Dado const &d) {
	valor = d.valor;
}

int 
Dado::jogar() {
	valor = std::round(dis(gen)); 
	return valor;
}

int 
Dado::getValor() {
	return valor;
}

Dado 
Dado::operator+ (Dado &d) {
   return Dado(valor + d.valor);
}

std::ostream& operator<< (std::ostream &o, Dado const d) {
	o << d.valor;
	return o;
}
