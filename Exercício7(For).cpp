//Faça um programa que lê dois valores inteiros e calcule a soma dos números entre eles, incluindo os valores lidos
#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2, soma;
    
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite um número: ";
    cin >> n2;
    
    soma = 0;
    
    for(x = n1; x <= n2; x++){
        soma = x + soma;
        cout << x << " + ";
    }

    cout << "\nA soma é: "<< soma << endl;
    
    return 0;
}