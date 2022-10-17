//Faça um algoritmo para somar os números ímpares de 10 a 15.
#include <iostream>
using namespace std;
int main()
{
    
    int x, soma;
    
    soma = 0;
    
    for(x = 10; x <= 15; x++){
        if(x % 2 != 0){
            soma = soma + x;
        }
    }
    
    cout << "A soma é: " << soma;
    
    return 0;
}