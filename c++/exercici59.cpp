#include <iostream>
#include <vector>
using namespace std;

int comptar_coincidencia_index(const vector<int>& llista) {
    int comptador = 0;
    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == i) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    vector<int> l = {0, 2, 3, 3, 4};
    cout << comptar_coincidencia_index(l) << endl;
    return 0;
}
