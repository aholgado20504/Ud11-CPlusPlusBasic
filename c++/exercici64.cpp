#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string llegir_fitxer(const string& nom_fitxer) {
    ifstream fitxer(nom_fitxer);
    
    // Comprovar si el fitxer s'ha obert correctament
    if (!fitxer.is_open()) {
        cout << "ERROR: No s'ha pogut obrir el fitxer '" << nom_fitxer << "'" << endl;
        cout << "Possibles causes: fitxer no existeix o no tens permisos." << endl;
        return "";
    }
    
    // Llegir tot el contingut
    string contingut, linia;
    while (getline(fitxer, linia)) {
        contingut += linia + "\n";
    }
    
    fitxer.close();
    return contingut;
}

int main() {
    string contingut = llegir_fitxer("exemple.txt");
    
    if (!contingut.empty()) {
        cout << "Contingut del fitxer:" << endl;
        cout << contingut << endl;
    }
    
    return 0;
}
