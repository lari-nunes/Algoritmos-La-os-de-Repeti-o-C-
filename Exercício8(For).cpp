//Faça um programa como o do exercício 7, mas, deve ser validado e somado somente os números pares.
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
        if(x % 2 == 0){
        soma = x + soma;
        cout << x << " + ";
        }
    }

    cout << "\nA soma é: "<< soma << endl;
    
    return 0;
}