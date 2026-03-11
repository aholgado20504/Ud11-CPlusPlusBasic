#include <iostream>
using namespace std;

bool es_de_traspas(int any) {
    if (any % 4 != 0) return false;
    if (any % 100 != 0) return true;
    return any % 400 == 0;
}

int main() {
    cout << (es_de_traspas(2024) ? "SI" : "NO") << endl;
    cout << (es_de_traspas(2025) ? "SI" : "NO") << endl;
    cout << (es_de_traspas(2000) ? "SI" : "NO") << endl;
    cout << (es_de_traspas(1900) ? "SI" : "NO") << endl;
    return 0;
}
