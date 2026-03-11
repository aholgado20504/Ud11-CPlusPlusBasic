#include <iostream>
#include <vector>
#include <string>
using namespace std;

int index_paraula(const vector<string>& llista, const string& cerca) {
    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == cerca) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<string> ordenat = {"ana", "carles", "maria", "pere", "rosa"};
    
    cout << index_paraula(ordenat, "maria") << endl;
    cout << index_paraula(ordenat, "joan") << endl;
    
    return 0;
}
