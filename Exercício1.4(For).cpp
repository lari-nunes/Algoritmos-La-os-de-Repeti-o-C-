//Faça uma função para imprimir os números de 20 a 0.
#include <iostream>
using namespace std;
int main()
{
   
    
    for(int x = 20; x >= 0; x--){
        if(x < 0){
           cout << x;
        }else{
            cout << x << ", ";
        }
    }
    
    return 0;
}