//Faça um algoritmo para calcular a média dos números ímpares de 10 a 50
#include <iostream>
using namespace std;
int main()
{
    
    int x, media, soma;
    
    for(x = 10; x <= 50; x++){
        if(x % 2 != 0){
            cout << x << ", ";
            soma = soma + x;
        }
    }
    
    media = soma / 20;
    cout << "A média é: " << media << endl;
    
    return 0;
}