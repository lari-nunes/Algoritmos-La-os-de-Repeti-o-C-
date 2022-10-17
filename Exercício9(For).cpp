//Faça um programa como o do exercício 6, mas, deve ser validado e somado independente da ordem de entrada do usuário. (Ex: primeira entrada 17, segunda entrada 5, resultado 143)
#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2, soma, aux;
    
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite um número: ";
    cin >> n2;
    
    soma = 0;

    if(n1 > n2){
        aux= n1;
        n1= n2;
        n2= aux;
    }
    
    for(x = n1; x <= n2;x++){
        soma= soma + x;
    }
        
    cout << "\nA soma é: "<< soma << endl;
        
    return 0;
        
}
        


