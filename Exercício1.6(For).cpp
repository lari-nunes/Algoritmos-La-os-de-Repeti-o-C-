//Faça um algoritmo para somar os números pares de 4 a 20.
#include <iostream>
using namespace std;
int main()
{
    
    int x, soma;
    
    soma = 0;
    
    for(x = 4; x <= 20; x++){
        if(x % 2 == 0){
            soma = soma + x;
        }
    }
    
    cout << "A soma é: " << soma;
    
    return 0;
}