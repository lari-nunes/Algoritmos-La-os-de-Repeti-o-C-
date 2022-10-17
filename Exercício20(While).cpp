//.As idades de Bob e Renata são respectivamente 42 e 17 anos. Faça um
//algoritmo para determinar quando Bob terá o dobro da idade de Renata.
#include <iostream>
using namespace std;
int main(){
    
    int idadeBob = 42, idadeRenata = 17, conta, x=0;
    
    while(idadeBob > (idadeRenata * 2)){
        x++;
        idadeRenata++;
        idadeBob++;
    }
    
    cout << "O dobro da idade de Renata demora " << x << " anos para atingir a de Bob, Renata teria " << idadeRenata << " e Bob teria " << idadeBob;
    
    return 0;
}
    