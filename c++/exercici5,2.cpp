#include <iostream>
#include <string>
using namespace std;

// Declaració o còpia de la funció
string comprovaMajorEdat(int edat) {
    if (edat > 18) {
        return "Ets major d'edat.";
    } else if (edat < 18) {
        return "No ets major d'edat.";
    } else {
        return "Tens exactament 18 anys.";
    }
}

int main() {
    int edat;

    cout << "Introdueix la teva edat: ";
    cin >> edat;

    // Cridem la funció i mostrem el resultat
    string resultat = comprovaMajorEdat(edat);
    cout << resultat << endl;

    return 0;
}