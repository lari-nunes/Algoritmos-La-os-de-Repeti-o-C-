//Faça um algoritmo para calcular a média dos números divisíveis por 5 no intervalo de 10 a 50
#include <iostream>
using namespace std;
int main()
{
    
    int x, media, soma;
    
    soma = 0;
    
    for(x = 10; x <= 50; x++){
        if(x % 5 == 0){
           cout << x << ", ";
           soma = soma + x;
        }
    }

    media = soma / 9;
    cout << "A média é: " << media << endl;
    
    return 0;
}