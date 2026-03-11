#include <iostream>
#include <vector>
using namespace std;

int Passar_a_Numero(const vector<int>& llista) {
    int numero = 0;
    for (int digit : llista) {
        numero = numero * 10 + digit;
    }
    return numero;
}

int main() {
    vector<int> digits = {3, 4, 1, 5};
    cout << Passar_a_Numero(digits) << endl;
    return 0;
}
