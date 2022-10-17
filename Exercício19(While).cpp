//Didi possui 52 anos de idade, e seus filhos possuem 10 e 12 anos,
//respectivamente. Faça um algoritmo para determinar quando a idade de Didi
//será igual a soma das idades dos seus filhos
#include <iostream>
using namespace std;
int main(){
    
    int idadeDidi = 52, filho1 = 10, filho2 = 12, soma = 0, x = 0;
    
    soma = idadeDidi - (filho1+filho2);
    while (x < soma) {
    x++;
                    
    }
    cout << "A idade de Didi será de: " << soma << " anos." << endl;
    
    return 0;
}
    