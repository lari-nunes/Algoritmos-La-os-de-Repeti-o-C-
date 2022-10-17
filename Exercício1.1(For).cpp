//Faça um algoritmo para imprimir os números de 1 a 100.
#include <iostream>
using namespace std;
int main()
{
    int x;
    
    for(x = 1; x <= 100; x++){
        if(x < 100){
            cout << x << ", ";
        }else{
            cout << x;
        }
    }
    return 0;
}