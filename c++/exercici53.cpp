#include <iostream>
#include <vector>
using namespace std;

bool es_primer(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> prims;
    for (int i = 2; i <= 100; i++) {
        if (es_primer(i)) {
            prims.push_back(i);
            cout << i << " ";
        }
    }
    cout << endl << "Total: " << prims.size() << " nombres primers" << endl;
    return 0;
}
