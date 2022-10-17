//.Faça um algoritmo para calcular o rendimento de uma aplicação bancária. Deve receber o valor inicial do investimento, o percentual do lucro mensal e a durabilidade da aplicação em meses. Deve retornar o valor de lucro de cada mês e o valor total dos lucros obtidos no período.
#include <iostream>
using namespace std;

int main()
{
    float valorI, percentual, lucro = 0;
    int meses;
    
    cout << "Digite um valor Inicial: ";
    cin >> valorI;
    cout << "Digite um mes: ";
    cin >> meses;
    cout << "Digite um percentual: ";
    cin >> percentual;

    for(int i = 1; i <= meses; i++){
        lucro = valorI / 100 * percentual;
        valorI = valorI + lucro;
        cout << "O lucro do mês é: " << lucro << endl;
    }
    
    cout << "O valor será: " << valorI << endl;
    return 0;
    
}