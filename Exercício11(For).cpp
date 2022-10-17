//Faça um programa que lê um inteiro que indique a quantidade de alunos de uma turma (menos que 5). Depois lê a idade de todos os alunos. Calcule e imprima a média de idade da turma.
#include <iostream>
using namespace std;
int main()
{
    
    int media, x, num, idade, soma;
    
    cout << "Digite um número de alunos: ";
    cin >> num;
    
    soma = 0;
    
    for(x = 1; x <= num; x++){
        cout << "Digite a idade do aluno: ";
        cin >> idade;
        soma = soma + idade;
    }
    
    media = soma / num;
    
    cout << "A média de idade da turma é: " << media << endl;
    return 0;
}