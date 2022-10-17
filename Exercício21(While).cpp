//.Faça um algoritmo que receba dois números inteiros positivos (a e b, onde a
//deve ser maior que b) e calcule o MDC (Máximo Divisor Comum) usando o
//processo das divisões sucessivas.
//Exemplo: a= 48 e b=30
//- 48/30 = 1 (resto 18)
//- 30/18 = 1 (resto 12)
//- 18/12 = 1 (resto 6)
//- 12/6 = 2 (resto 0), logo o MDC (48,30) = 6
#include <iostream>
using namespace std;
int main(){
    
    int v1, v2, a, b, c = 1;
    
    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;
    
    if(v1 > v2){
        a = v1; b = v2;
    }
    int a1 = a; int b1 = b;
    while(c > 0){
        c = a % b;
        cout << a << "/" << b << "= resto" << c << endl;
        a = b;
        b = c;
    }
    
    cout << "MDC (" << a1 << "," << b1 << ")= " << a << endl;
    
	return 0;
}