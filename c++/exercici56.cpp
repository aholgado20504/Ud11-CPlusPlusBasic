#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> paraules_per_lletra(const vector<string>& paraules, char lletra) {
    vector<string> resultat;
    for (string p : paraules) {
        if (!p.empty() && p[0] == lletra) {
            resultat.push_back(p);
        }
    }
    return resultat;
}

int main() {
    vector<string> llista = {"maria", "manta", "peu", "ma"};
    char lletra = 'p';
    
    vector<string> filtrades = paraules_per_lletra(llista, lletra);
    
    for (string p : filtrades) {
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
