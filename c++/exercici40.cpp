#include <iostream>
#include <vector>
using namespace std;

vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> nova;
    for (int i = 1; i < llista.size() - 1; i++) {
        nova.push_back(llista[i]);
    }
    return nova;
}

int main() {
    vector<int> original = {1, 2, 3, 4, 5};
    vector<int> resultat = eliminarcapicua(original);
    
    for (int x : resultat) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
