#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Numero (<100): ";
    cin >> n;
    
    if (n >= 100) {
        cout << "Numero ha de ser menor de 100" << endl;
        return 1;
    }
    
    long long suma = 0;
    for (int i = n - 4; i >= 0; i -= 4) {
        suma += (long long)i * i;
    }
    
    cout << "Suma = " << suma << endl;
    return 0;
}