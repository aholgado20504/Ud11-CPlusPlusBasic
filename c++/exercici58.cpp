#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> llista_a_diccionari(const vector<string>& llista) {
    unordered_map<string, int> diccionari;
    for (int i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }
    return diccionari;
}

int main() {
    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};
    
    auto dic = llista_a_diccionari(llista);
    
    for (auto& parell : dic) {
        cout << "'" << parell.first << "':" << parell.second << " ";
    }
    cout << endl;
    
    return 0;
}
