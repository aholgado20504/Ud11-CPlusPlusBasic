#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Numero: ";
    cin >> n;
    
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    
    cout << "Suma digits = " << suma;
    if (suma % 2 == 0) {
        cout << " (parell)" << endl;
    } else {
        cout << " (senar)" << endl;
    }
    
    return 0;
}
