//Implemente um algoritmo para apresentar a tabuada de um número lido pelousuário. O número recebido do Usuário deve ser natural. (Números naturaissão números inteiros positivos).
#include <iostream>
using namespace std;
int main()
{
    
    int x, multi, n1;
    
    cout << "Digite um numero: ";
    cin >> n1;
    
    multi = 0;
    
    for(x = 1; x <= 10; x++){
        multi = n1 * x;
        cout << n1 << " x " << x << " = " << multi << endl;
    }
    
    return 0;
}