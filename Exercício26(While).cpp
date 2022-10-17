//Implemente um algoritmo para apresentar a tabuada de um número lido pelo
//usuário. O número recebido do Usuário deve ser natural. (Números naturais
//são números inteiros positivos).
#include <iostream>
using namespace std;

int main()
{
    int num, x = 1, multi = 0;;
    
    cout << "Digite um número da tabuada: ";
    cin >> num;
    
    while(x <= 10){
        multi = num * x;
        cout << num << " x " << x << " = " << multi << endl;
        x++;
    }

    return 0;
}