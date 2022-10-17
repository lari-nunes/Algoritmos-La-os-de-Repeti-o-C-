//Um número primo é um número positivo maior que 1 com apenas dois divisores: 1 e o próprio número. Faça um algoritmo para determinar se um número é primo ou não.
#include <iostream>
using namespace std;

int main()
{
    int num, x, divi;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    divi = 0;
    
    for(x = 1; x <= num; x++){
        if(num % x == 0){
            divi++;
        }
    }
            
    if(divi == 2){
        cout << "Número primo" << endl;
    }else{
        cout << "Não é número primo" << endl;
        
    }
    return 0;
}