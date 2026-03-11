#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> llista_20_elements() {
    vector<int> llista;
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        llista.push_back(1 + rand() % 100);
    }
    return llista;
}

string esta_ordenada(const vector<int>& llista) {
    if (llista.size() < 2) return "no esta ordenada";
    
    bool asc = true, desc = true;
    
    for (int i = 1; i < llista.size(); i++) {
        if (llista[i] < llista[i-1]) asc = false;
        if (llista[i] > llista[i-1]) desc = false;
    }
    
    if (asc) return "esta ordenada de forma ascendent";
    if (desc) return "esta ordenada de forma descendent";
    return "no esta ordenada";
}

bool hi_ha_duplicats(const vector<int>& llista) {
    for (int i = 0; i < llista.size(); i++) {
        for (int j = i + 1; j < llista.size(); j++) {
            if (llista[i] == llista[j]) return true;
        }
    }
    return false;
}

int main() {
    vector<int> l = llista_20_elements();
    
    cout << "Llista generada: ";
    for (int x : l) cout << x << " ";
    cout << endl;
    
    cout << esta_ordenada(l) << endl;
    cout << "Te duplicats: " << (hi_ha_duplicats(l) ? "SI" : "NO") << endl;
    
    return 0;
}
