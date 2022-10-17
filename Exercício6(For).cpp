//Faça um programa que lê um valor inteiro e, em seguida, encontre e imprima os divisores desse número.
#include <iostream>
using namespace std;
int main()
{
    int x, n1;
    
    cout << "Digite um número: ";
    cin >> n1;
    
    for(x = 1; x <= n1; x++){
        if(n1 % x == 0){
           cout << x << ", ";
        }
    }

    return 0;
}