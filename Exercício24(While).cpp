//Faça um algoritmo para apresentar os números naturais menores que um
//valor inserido pelo usuário que também será um número natural.
#include <iostream>
using namespace std;
int main()
{
    
    int num, menor, x = 1;
    
    cout << "Digite um número: ";
    cin >> num;
    
    while(x < num){
        menor = num - x;
        cout << menor << ", ";
        x++;
    }
    
    return 0;
}