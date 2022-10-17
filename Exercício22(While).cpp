//Faça um algoritmo para imprimir os números inteiros menores que um valor
//inteiro fornecido. Caso o numero lido seja negativo inverter a logica para que
//das duas formas o ultimo valor a ser mostrado seja 0.
#include <iostream>
using namespace std;
int main()
{
    int num, menor, x = 0;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if(num > 0){
        while(x <= num){
            cout << x << ", ";
            x++;
        }
    }else if(num == 0){
        cout << "Operação Inválida";
    }else{
        while(num <= 0){
            cout << num << ", ";
            num++;
        }
    }
    
    return 0;
}