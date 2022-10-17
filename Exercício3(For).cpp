//Implemente um algoritmo para apresentar a tabuada de 1 a 10
#include <iostream>
using namespace std;
int main()
{
    
    int x, i, multi;

    multi = 0;
    
    for( x = 1; x <= 10; x++){
        cout << "\nTabuada do " << x << ":" << endl;
        for(i = 1; i <= 10; i++){
            multi = x * i;
            cout << x << " x " << i << " = " << multi << endl;
        }
    }
    return 0;
}