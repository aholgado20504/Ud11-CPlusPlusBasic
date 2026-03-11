#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> l1 = {1, 2, 3, 4};
    vector<int> l2 = {5, 0, 2};
    vector<int> l3 = {7};

    cout << "sumar_llista([1,2,3,4]) = "
         << sumar_llista(l1) << endl;          // 10
    cout << "multiplicar_llista([1,2,3,4]) = "
         << multiplicar_llista(l1) << endl;    // 24

    cout << "sumar_llista([5,0,2]) = "
         << sumar_llista(l2) << endl;          // 7
    cout << "multiplicar_llista([5,0,2]) = "
         << multiplicar_llista(l2) << endl;    // 0

    cout << "sumar_llista([7]) = "
         << sumar_llista(l3) << endl;          // 7
    cout << "multiplicar_llista([7]) = "
         << multiplicar_llista(l3) << endl;    // 7

    return 0;
}
