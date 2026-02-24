#include <iostream>
#include <vector>
using namespace std;

template <typename T>
int longitudLlista(const vector<T>& v) {
    int comptador = 0;
    for (const T& elem : v) {
        (void)elem;
        comptador++;
    }
    return comptador;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<char> v2 = {'a', 'b', 'c'};
    vector<double> v3; // buit

    cout << "longitudLlista(v1) = " << longitudLlista(v1) << endl; // 4
    cout << "longitudLlista(v2) = " << longitudLlista(v2) << endl; // 3
    cout << "longitudLlista(v3) = " << longitudLlista(v3) << endl; // 0

    return 0;
}
