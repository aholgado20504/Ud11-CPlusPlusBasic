#include <iostream>
#include <vector>
using namespace std;

bool superposicio(const vector<int>& a, const vector<int>& b) {
    for (int x : a) {
        for (int y : b) {
            if (x == y) {
                return true;  // Hi ha element comú
            }
        }
    }
    return false;  // No hi ha cap element en comú
}

int main() {
    // Exemple 1: llistes amb element comú
    vector<int> l1 = {1, 2, 3, 4};
    vector<int> l2 = {4, 5, 6};
    cout << "l1=[1,2,3,4] l2=[4,5,6]: " 
         << (superposicio(l1, l2) ? "VERTADER" : "FALS") << endl;  // VERTADER

    // Exemple 2: llistes sense elements comuns
    vector<int> l3 = {1, 2, 3};
    vector<int> l4 = {5, 6, 7};
    cout << "l3=[1,2,3] l4=[5,6,7]: " 
         << (superposicio(l3, l4) ? "VERTADER" : "FALS") << endl;  // FALS

    // Exemple 3: una llista buida
    vector<int> l5 = {1, 2};
    vector<int> l6 = {};
    cout << "l5=[1,2] l6=[]: " 
         << (superposicio(l5, l6) ? "VERTADER" : "FALS") << endl;  // FALS

    return 0;
}