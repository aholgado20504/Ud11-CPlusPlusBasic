#include <iostream>
#include <vector>
#include <string>
using namespace std;

void crear_punts(const vector<int>& nums) {
    for (int n : nums) {
        cout << string(n, '.') << '\n';
    }
}

void dibuixar_imatge() {
    vector<int> v = {28, 24, 20, 16, 24, 32, 16, 20, 12, 8, 16, 24, 16, 12, 4};
    crear_punts(v);
}

int main() {
    dibuixar_imatge();
    return 0;
}
