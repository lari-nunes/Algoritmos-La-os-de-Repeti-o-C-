// Faça um algoritmo para imprimir os números inteiros menores que um valor inteiro fornecido. Caso o numero lido seja negativo inverter a logica para que  das duas formas o ultimo valor a ser mostrado seja 0. 
#include <iostream>
using namespace std;
int main()
{
    
    int num, menor;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if(num > 0){
        for(int x = 0; x<=num;x++){
            cout<<x<<",";
        }
    }else if(num == 0){
        cout<<"Operação Invalida";
    }else{
        for(int x=num; x<=0; x++){
            cout<<x<<",";
        }
    }
    return 0;
}