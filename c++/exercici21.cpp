#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> filtrar_paraules(const vector<string>& paraules, int x) {
    vector<string> resultat;
    for (string p : paraules) {
        if (p.length() > x) {
            resultat.push_back(p);
        }
    }
    return resultat;
}

int main() {
    vector<string> v = {"Hola", "Ramis", "IES", "Paraula", "cotxe"};
    int x = 3;
    
    vector<string> filtrades = filtrar_paraules(v, x);
    for (string p : filtrades) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
