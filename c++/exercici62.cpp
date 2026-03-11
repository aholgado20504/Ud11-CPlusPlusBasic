#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> numeros_potencia(int potencia) {
    vector<int> resultats;
    for (int i = 0; i <= 10; i++) {
        resultats.push_back(static_cast<int>(pow(i, potencia)));
    }
    return resultats;
}

int main() {
    int pot = 2;  // Canvia per 3 (cub), 4, etc.
    
    vector<int> l = numeros_potencia(pot);
    
    for (int n : l) {
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}
