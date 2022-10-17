//Supondo que a população de um país A seja da ordem de 90.000.000 de
//habitantes com uma taxa anual de crescimento de 3% e que a população de
//um país B seja, aproximadamente, de 200.000.000 de habitantes com uma
//taxa anual de crescimento de 1,5%, fazer um algoritmo que calcule e escreva
//o número de anos necessários para que a população do país A ultrapasse ou
//iguale a população do país B, mantidas essas taxas de crescimento
#include <iostream>
using namespace std;

int main()
{
    float paisA = 90000000, paisB = 200000000, cont = 0;
    
    while(paisA < paisB){
        paisA += ((paisA * 3.0) / 100.0);
        paisB += ((paisB * 1.5) / 100.0);
        cont++;
    }
    
    cout << "Total de anos: " << cont << " anos." << endl;
    
    return 0;
}