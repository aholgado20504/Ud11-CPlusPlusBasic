#include <iostream>
#include <string>
using namespace std;

bool esVocalUTF8(const string& s) {
    const string vocals[] = {
        "a","e","i","o","u",
        "A","E","I","O","U",
        "à","è","é","í","ï","ò","ó","ú","ü",
        "À","È","É","Í","Ï","Ò","Ó","Ú","Ü"
    };

    for (const string& v : vocals) {
        if (s == v) return true;
    }
    return false;
}

int main() {
    cout << boolalpha;
    string entrada;
    cout << "Introdueix UNA lletra (pot tenir accent): ";
    cin >> entrada;
    cout << "esVocalUTF8(\"" << entrada << "\") = " << esVocalUTF8(entrada) << endl;

    return 0;
}
