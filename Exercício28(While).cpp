//Faça um algoritmo para imprimir os números pares de 10 a 50
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    while(x < 50){
        if(x % 2 == 0){
        cout << x << ", ";
        }
        x++;
    }
    
    return 0;
}