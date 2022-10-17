//Um determinado material radioativo perde metade de sua massa a cada 50
//segundos. Dada a massa inicial, em gramas, fazer um algoritmo que
//determine o tempo necessário para que essa massa se torne menor do que
//0,5 grama. Escreva a massa inicial, a massa final e o tempo calculado em
//horas, minutos e segundos.
#include <iostream>
using namespace std;
int main(){
    
	float massaInicial, massaAtual;
	int tempo = 0, hora, minuto, segundo;
	
	cout << "Massa inicial: ";
	cin >> massaInicial;
	
	
	massaAtual = massaInicial;
	
	while (massaAtual >= 0.5){
		tempo = tempo + 50;
		massaAtual = massaAtual/2.0;
	}
	
	hora = tempo / 3600;
	minuto = (tempo % 3600) / 60;
	segundo = (tempo % 3600) % 60;
	
	
	cout << "Tempo em segundos: " << tempo << endl;
	
	cout << "Horas: " << hora << endl;
	cout << "Minutos: " << minuto << endl;
	cout << "Segundos: " << segundo << endl;
	
	cout << "Massa em gramas: " << massaAtual << endl;
}