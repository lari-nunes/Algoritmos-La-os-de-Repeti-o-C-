//.Faça um algoritmo para apresentar os 10 primeiros termos da série de Fibonacci. A série de Fibonacci é obtida pela soma dos dois termos anteriores. O primeiro termo é 0 e o segundo é 1. Exemplo: A saída do programa será: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. (DESAFIO)
#include <iostream>
using namespace std;
int main()
{
    int soma1, soma2, soma3, n, x;
    n = 10;
    soma1 = -1;
    soma2 = 1;
    
    for(x = 0; x < n; x++){
        soma3= soma1 + soma2;
        soma1 = soma2;
        soma2 = soma3;
        cout << soma3 << ", ";
    }
    return 0;
}