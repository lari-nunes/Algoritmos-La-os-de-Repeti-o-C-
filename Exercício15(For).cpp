//Faça um programa que lê 10 valores, um de cada vez, e conte quantos estão no intervalo de 10 a 50.
#include <iostream>
using namespace std;

int main()
{
    int cont=0,x, valor = 0;
    
    for(x = 1; x <= 10; x++){
        cout << "Digite um valor: ";
        cin >> valor;
        if(valor >= 10 && valor <= 50){
            cont++;
        }
    }

    cout << "\nExistem " << cont << " valores entre 10 e 50." << endl;
    return 0;
}