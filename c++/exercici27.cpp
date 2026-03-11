#include <iostream>
#include <vector>
#include <string>
using namespace std;

int nums_que_comencen_per(const vector<string>& noms, char lletra) {
    int comptador = 0;
    for (string nom : noms) {
        if (!nom.empty() && nom[0] == lletra) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    vector<string> noms = {"anna", "bernardo", "alfred", "carla", "antoni"};
    char lletra;
    
    cout << "Introdueix una lletra: ";
    cin >> lletra;
    
    cout << "Noms que comencen per '" << lletra << "': " 
         << nums_que_comencen_per(noms, lletra) << endl;
    
    return 0;
}
