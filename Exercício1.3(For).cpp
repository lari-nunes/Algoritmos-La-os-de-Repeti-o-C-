//Faça uma função para imprimir os números ímpares de 10 a 50.
#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2;
    
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    
    for(x = 10; x <=50; x++){
        if(x % 2 != 0){
            if(x == 49){
                cout << x << ". ";
            }else{
                cout << x << ", ";
            }
        }
        
    }
    return 0;
}