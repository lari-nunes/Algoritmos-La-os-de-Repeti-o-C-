//Implemente um algoritmo para apresentar a tabuada de 1 a 10.
#include <iostream>
using namespace std;
int main()
{
    
    int x, multi, i;
    multi = 0;
    x = 1;
    
    
    while(x <= 10){
        cout << "\nTabuada do " << x << ":" << endl;
        i = 1;
        while(i <= 10){
            multi = x * i;
            cout << x << " x " << i << " = " << multi << endl;
            i++;
        }
       x++;
    }
        
    
    
    return 0;
}