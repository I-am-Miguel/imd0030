#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::cout;
using std::endl;

class Veiculo {
   protected:
      string cor;
      string modelo;
      string ano;
      string placa;
   public:
      virtual void ligar() {};
      void andar() {};
      void parar() {};
      void setModelo(string _modelo) {};
      void setPlaca(string _placa) {};
      void setAno(string _ano) {};
      void setCor(string _cor) {};
};

class Carro : public Veiculo {
   private:
      double volumePortaMalas;
   public:
      string getVolumePortaMalas() {};
      void setVolumePortaMalas(double v) {};
      void ligar() {};
      void andar() {};
      void parar() {};
};

int main(int argc, char const *argv[])
{
   Carro c;
   c.setModelo("Toyota Corolla");
   c.setPlaca("ABC-1234");
   c.setVolumePortaMalas(22.50);
   c.ligar();

   Veiculo* v = new Carro;

   Veiculo* v2 = new Veiculo;   

   Carro* c1 = (Carro*)(v2);
   c1->setModelo("Toyota Corolla");
   c1->setPlaca("ABC-1234");
   c1->setVolumePortaMalas(22.50);
   c1->ligar();


   Carro* c2 = static_cast<Carro*>(v2);
   c2->setModelo("Toyota Corolla");
   c2->setPlaca("ABC-1234");
   c2->setVolumePortaMalas(22.50);
   c2->ligar();

   Carro* c3 = dynamic_cast<Carro*>(v2);
   c3->setModelo("Toyota Corolla");
   c3->setPlaca("ABC-1234");
   c3->setVolumePortaMalas(22.50);
   c3->ligar();



   return 0;
}