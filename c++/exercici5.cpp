#include <iostream>
using namespace std;

int main() {
    int edat;
    cout << "Introdueix la teva edat: ";
    cin >> edat;
    if (edat >= 18) {
        cout << "Ets major d'edat." << endl;
    } else {
        cout << "No ets major d'edat." << endl;
    }
    return 0;
}
