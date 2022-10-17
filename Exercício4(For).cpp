//Faça um programa que lê um valor inteiro inicial e um valor inteiro final e imprima os números entre eles.
#include <iostream>
using namespace std;
int main()
{
    int x, valorInicial, valorFinal;
    
    cout << "Digite um valor: ";
    cin >> valorInicial;
    cout << "Digite um valor: ";
    cin >> valorFinal;
    
    for(x = valorInicial + 1; x < valorFinal; x++){
        cout << x << ", ";
    }
    
    }

    return 0;
}