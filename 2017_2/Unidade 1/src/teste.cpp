// Example program
#include <iostream>
#include <random>
#include <ctime>

class Dado {
  private:
    std::random_device r;
    std::default_random_engine eng;
    std::uniform_real_distribution<double> urd;
  public:
    Dado() : r{}, eng{r()}, urd(0, 1) {}
    float draw(void) { return urd(eng); }
};

int main()
{
    Dado dados[2];
    for (unsigned j = 0; j < 10; j++)
        for (unsigned i = 0; i < 2; i++)
            std::cout << "Uniform[" << i << "] [0, 1): " << dados[i].draw() << std::endl;
}


