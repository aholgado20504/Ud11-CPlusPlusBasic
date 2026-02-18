#include <iostream>
#include <string>
using namespace std;

// function defined outside of main
string comprovaMajorEdat(int edat) {
    if (edat > 18) {
        return "Ets major d'edat.";
    } else if (edat < 18) {
        return "No ets major d'edat.";
    } else {               // edat == 18
        return "Tens exactament 18 anys.";
    }
}

int main() {
    int edat;
    cout << "Introdueix l'edat: ";
    cin >> edat;

    cout << comprovaMajorEdat(edat) << '\n';
    return 0;
}