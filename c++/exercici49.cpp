#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0;
    cout << "Numero inicial: ";
    cin >> a;
    cout << "Numero final: ";
    cin >> b;
    
    if (a > b) {
        int temp = a; a = b; b = temp;
    }
    
    for (int i = a; i <= b; i++) {
        suma += i;
    }
    
    cout << "Suma entre " << a << " i " << b << " = " << suma << endl;
    
    return 0;
}
