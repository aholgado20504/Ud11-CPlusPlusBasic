#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> crear_llista_fitxer(const string& nom_fitxer) {
    vector<string> paraules;
    ifstream fitxer(nom_fitxer);
    
    string paraula;
    while (fitxer >> paraula) {
        paraules.push_back(paraula);
    }
    
    fitxer.close();
    return paraules;
}

int main() {
    vector<string> llista = crear_llista_fitxer("prova.txt");
    
    for (string p : llista) {
        cout << p << " ";
    }
    cout << endl;
    
    return 0;
}
