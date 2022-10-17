//Faça um algoritmo para somar os números entre 3 e 10.
#include <iostream>
using namespace std;
int main()
{
    
    int x, soma;
    
    soma = 0;
    
    for(x = 4; x < 10; x++){
        soma = soma + x;
    }
    
    cout << " A soma é: " << soma;
    return 0;
}