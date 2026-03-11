#include <iostream>
#include <string>
using namespace std;

string invertir(const string& s) {
    string resultat;
    resultat.reserve(s.size());          
    for (int i = s.size() - 1; i >= 0; --i) {
        resultat += s[i];
    }
    return resultat;
}

int main() {
    string text = "Soc del Ramis";
    string inv = invertir(text);

    cout << "Original : " << text << '\n';
    cout << "Invertida: " << inv << '\n';   // simaR led coS
    cout << invertir("hola") << '\n';       // aloh
    cout << invertir("") << '\n';           // cadena buida

    return 0;
}
