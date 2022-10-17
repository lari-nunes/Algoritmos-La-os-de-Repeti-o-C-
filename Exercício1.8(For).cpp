//Faça um algoritmo para multiplicar os números no intervalo fechado de 2 a 5.
#include <iostream>
using namespace std;
int main()
{
    
    int x, multi;
    
    multi = 2; 
    
    for(x = 3; x <= 5; x++){
        multi = multi * x;
    }
    
    cout << "A multiplicação fica: " << multi;
    
    return 0;
}