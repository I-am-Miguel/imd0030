#include <iostream>
#include <stack>

using namespace std;

#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

// Atribui um peso ao operadores
// Quanto maior o peso, maior a precedencia
// Se não for um operador, return 0 
int getWeight(char ch) {
   switch (ch) {
      case '/':
      case '*': return 2;
      case '+':
      case '-': return 1;
      default : return 0;
   }
}

// Converte expressões infix em expressões postfix usando uma pilha (stack)
void infix2postfix(char infix[], char postfix[], int size) {
   stack<char> s;
   int weight;
   int i = 0;
   int k = 0;
   char ch;
   // Itera sobre a expressão infix   
   while (i < size) {
      ch = infix[i];
      if (ch == '(') {
         // Empilha o abre parenteses
         s.push(ch);
         i++;
         continue;
      }
      if (ch == ')') {
         // Se um fecha parenteses for encontrado,
         // desempilha todos os elementos da pilha 
         // concatenando na expressao postfix
         // ate que seja encontrado um abre parenteses
         while (!s.empty() && s.top() != '(') {
            postfix[k++] = s.top();
            s.pop();

         }
         // desempilha o abre parenteses
         if (!s.empty()) {
            s.pop();
         }
         i++;
         continue;
      }
      weight = getWeight(ch);
      if (weight == 0) {
         // Um operando qualquer foi encontrado
         // simplesmente concatena com a expressao postfix
         postfix[k++] = ch;

      }
      else {
         // Um operador foi encontrado
         if (s.empty()) {
            // Se a pilha esta vazia, ja empilha o operador
            s.push(ch);
         }
         else {
            // desempilha todos os operadores da pilha
            // concatenando com a expressao postfix
            // ate que seja encontrado um operador com precedencia
            // inferior ao operador corrente
            while (!s.empty() && s.top() != '(' &&
                  weight <= getWeight(s.top())) {
               postfix[k++] = s.top();
               s.pop();

            }
            // empilha o operador corrente
            s.push(ch);
         }
      }
      i++;
   }
   // desempilha os operadores restantes na pilha
   // concatenando-os com a expressao postfix
   while (!s.empty()) {
      postfix[k++] = s.top();
      s.pop();
   }
   postfix[k] = '\0'; // Encerra a string da expressao postfix 
}

int main(int argc, char const *argv[])
{
    char infix[] = "( 5 + ( 6 * 7 ) - ( 8 + 60 ) / 3 )";
    int size = strlen(infix);
    char postfix[size];
    infix2postfix(infix,postfix,size);
    cout<<"\nInfix Expression :: "<<infix;
    cout<<"\nPostfix Expression :: "<<postfix;
    cout<<endl;

    return 0;
}