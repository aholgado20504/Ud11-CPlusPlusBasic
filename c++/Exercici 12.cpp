#include <iostream>
#include <vector>
using namespace std;

// Suma tots els valors d'una llista
int sumar_llista(const vector<int>& nums) {
    int suma = 0;
    for (int x : nums) {
        suma += x;
    }
    return suma;
}
int multiplicar_llista(const vector<int>& nums) {
    if (nums.empty()) return 0;      
    int prod = 1;
    for (int x : nums) {
        prod *= x;
    }
    return prod;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {5, 0, 2};
    vector<int> c = {10};

    cout << "sumar_llista([1,2,3,4]) = "
         << sumar_llista(a) << endl;           // 10
    cout << "multiplicar_llista([1,2,3,4]) = "
         << multiplicar_llista(a) << endl;     // 24

    cout << "sumar_llista([5,0,2]) = "
         << sumar_llista(b) << endl;           // 7
    cout << "multiplicar_llista([5,0,2]) = "
         << multiplicar_llista(b) << endl;     // 0

    cout << "sumar_llista([10]) = "
         << sumar_llista(c) << endl;           // 10
    cout << "multiplicar_llista([10]) = "
         << multiplicar_llista(c) << endl;     // 10

    return 0;
}
