#include <iostream>
#include <vector>
using namespace std;

vector<int> elimina_duplicats(const vector<int>& llista) {
    vector<int> resultat;
    for (int x : llista) {
        bool existeix = false;
        for (int y : resultat) {
            if (x == y) {
                existeix = true;
                break;
            }
        }
        if (!existeix) {
            resultat.push_back(x);
        }
    }
    return resultat;
}

int main() {
    vector<int> original = {1, 2, 3, 2, 4, 1, 5, 3};
    vector<int> sense_dup = elimina_duplicats(original);
    
    cout << "Original: ";
    for (int x : original) cout << x << " ";
    cout << endl;
    
    cout << "Sense duplicats: ";
    for (int x : sense_dup) cout << x << " ";
    cout << endl;
    
    return 0;
}
