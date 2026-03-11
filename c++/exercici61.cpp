#include <iostream>
#include <vector>
using namespace std;

vector<int> primers_parells() {
    vector<int> parells;
    for (int i = 1; i <= 10; i++) {
        parells.push_back(i * 2);
    }
    return parells;
}

int main() {
    vector<int> l = primers_parells();
    for (int p : l) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
