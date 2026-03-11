#include <iostream>
#include <vector>
#include <string>
using namespace std;

void crear_punts(const vector<int>& nums) {
    for (int n : nums) {
        cout << string(n, '.') << '\n';
    }
}

int main() {
    vector<int> v = {2, 3, 4};
    crear_punts(v);
    return 0;
}
