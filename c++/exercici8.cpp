#include <iostream>
using namespace std;

int gran(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    cout << "Introdueix dos enters: ";
    cin >> x >> y;
    cout << "El major es: " << gran(x, y) << endl;

    return 0;
}
