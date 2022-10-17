//Faça um algoritmo para apresentar os números naturais menores que um valor inserido pelo usuário que também será um número natural
#include <iostream>
using namespace std;
int main()
{
    
    int num, x, menor;
    
    cout << "Digite um número: ";
    cin >> num;
    
    for(x = 1; x < num; x++){
        menor = num - x;
        cout << menor << ", ";
    }

    return 0;
}