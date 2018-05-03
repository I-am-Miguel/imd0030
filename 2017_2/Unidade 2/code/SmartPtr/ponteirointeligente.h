#ifndef _PONTEIROINTELIGENTE_
#define _PONTEIROINTELIGENTE_

template <typename T>
class PonteiroInteligente {
public:
	PonteiroInteligente (T* _ponteiro): ponteiro(_ponteiro);
	~PonteiroInteligente () {
		delete ponteiro;
		std::cout << "Ponteiro liberado." << std::endl;
	};
	T* operator->() const { return ponteiro; };
	T& operator*() const { return *ponteiro; };
private:
	T* ponteiro;
}

#endif