#include <iostream>
#include <vector>

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
    Bomba(): Arma() 
    { cout << "Bomba " << id << " criada." << endl; }
    ~Bomba() 
    { cout << "Bomba " << id << " destruida." << endl; }
    void caracteristica()
    { cout << "Biribinha atomica.\n"; }
};

class Pistola : public Arma
{
public:
    Pistola(): Arma() 
    { cout << "Pistola " << id << " criada." << endl; }
    ~Pistola() 
    { cout << "Pistola " << id << " destruida." << endl; }
    void caracteristica()
    { cout << "Colt .45.\n"; }
};

class SacoDeArmas
{
private:
    vector<Arma> arsenal;
public:
    ~SacoDeArmas(){
        arsenal.clear();
        cout << "Saco de Armas destruido." << endl;
    }
    void addArma (Arma &_arma)
    {
        arsenal.push_back(_arma);
    }
    void mostraTuto()
    {
        for (auto i = arsenal.begin(); i != arsenal.end(); ++i)
        {
            i->caracteristica();
        }
    }
};

int main()
{
    Arma a;
    Bomba b;
    Pistola p;

    SacoDeArmas *saco = new SacoDeArmas;

    saco->addArma(a);
    saco->addArma(b);
    saco->addArma(p);

    saco->mostraTuto();

    delete saco;

    return 0;
}