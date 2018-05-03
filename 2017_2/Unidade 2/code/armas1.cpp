#include <iostream>
using namespace std;

class Arma
{
private:
    static int nextid;
protected:
    int id;
public:
    Arma() 
    { id = nextID(); cout << "Arma " << id << " criada." << endl; }
    ~Arma() 
    { cout << "Arma " << id << " destruida." << endl; }
    void caracteristica()
    { cout << "Perigosa.\n"; }
    static int nextID()
    { nextid++; return nextid; }
};

int Arma::nextid = 0;

class Bomba : public Arma
{
public:
    Bomba() 
    { cout << "Bomba " << id << " criada." << endl; }
    ~Bomba() 
    { cout << "Bomba " << id << " destruida." << endl; }
    void caracteristica()
    { cout << "Biribinha atomica.\n"; }
};

class Pistola : public Arma
{
public:
    Pistola() 
    { cout << "Pistola " << id << " criada." << endl; }
    ~Pistola() 
    { cout << "Pistola " << id << " destruida." << endl; }
    void caracteristica()
    { cout << "Colt .45.\n"; }
};

int main()
{
    Arma *a = new Arma;
    Bomba *b = new Bomba;
    Pistola *p = new Pistola;

    a->caracteristica();
    b->caracteristica();
    p->caracteristica();

    delete a;
    delete b;
    delete p;

    return 0;
}