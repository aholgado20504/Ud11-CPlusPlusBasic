#include <iostream>
#include <bitset>   // per mostrar en binari
using namespace std;

// Funció auxiliar per mostrar un enter en diferents bases
void mostraEnBases(int n) {
    cout << "\n--- Canvi de base per al valor " << n << " ---\n";

    // Binari (32 bits)
    cout << "Binari      : " << bitset<32>(n) << endl;   // mostra 32 bits [web:30][web:34]

    // Octal, decimal i hexadecimal amb manipuladors
    cout << "Octal       : " << oct << n << endl;       // base 8 [web:35][web:48]
    cout << "Decimal     : " << dec << n << endl;       // base 10
    cout << "Hexadecimal : " << hex << n << endl;       // base 16
    cout << dec; // a decimal per no desquadrar sortides posteriors
}

int main() {
    int a_int, b_int;
    double a, b;

    cout << "Introdueix dos enters (a b): ";
    cin >> a_int >> b_int;

    cout << "Introdueix dos reals (a b): ";
    cin >> a >> b;

    cout << "\n--- Aritmetica amb enters ---\n";
    cout << "a_int + b_int = " << a_int + b_int << endl;
    cout << "a_int - b_int = " << a_int - b_int << endl;
    cout << "a_int * b_int = " << a_int * b_int << endl;
    if (b_int != 0) {
        cout << "a_int / b_int = " << a_int / b_int << endl;
        cout << "a_int % b_int = " << a_int % b_int << endl;
    } else {
        cout << "Divisio/modul per zero no permesa.\n";
    }

    cout << "\n--- Aritmetica amb reals ---\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if (b != 0.0) {
        cout << "a / b = " << a / b << endl;
    } else {
        cout << "Divisio per zero no permesa.\n";
    }

    cout << "\n--- Comparacio (enters) ---\n";
    cout << "a_int == b_int: " << (a_int == b_int) << endl;
    cout << "a_int != b_int: " << (a_int != b_int) << endl;
    cout << "a_int <  b_int: " << (a_int <  b_int) << endl;
    cout << "a_int <= b_int: " << (a_int <= b_int) << endl;
    cout << "a_int >  b_int: " << (a_int >  b_int) << endl;
    cout << "a_int >= b_int: " << (a_int >= b_int) << endl;

    cout << "\n--- Comparacio (reals) ---\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a <  b: " << (a <  b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a >  b: " << (a >  b) << endl;
    cout << "a >= b: " << (a >= b) << endl;

    cout << "\n--- Logics (sobre condicions d'enters) ---\n";
    bool c1 = (a_int > 0);
    bool c2 = (b_int > 0);
    cout << "c1 = (a_int > 0) -> " << c1 << endl;
    cout << "c2 = (b_int > 0) -> " << c2 << endl;
    cout << "c1 && c2: " << (c1 && c2) << endl;
    cout << "c1 || c2: " << (c1 || c2) << endl;
    cout << "!c1: " << (!c1) << endl;

    cout << "\n--- Assignacio (enters) ---\n";
    int x = a_int;
    cout << "x = a_int -> x = " << x << endl;
    x += b_int;
    cout << "x += b_int -> " << x << endl;
    x -= b_int;
    cout << "x -= b_int -> " << x << endl;
    x *= b_int;
    cout << "x *= b_int -> " << x << endl;
    if (b_int != 0) {
        x /= b_int;
        cout << "x /= b_int -> " << x << endl;
        x %= b_int;
        cout << "x %= b_int -> " << x << endl;
    } else {
        cout << "No es poden provar /= i %= amb b_int = 0.\n";
    }

    cout << "\n--- Increment / decrement ---\n";
    int y = a_int;
    cout << "y inicial = " << y << endl;
    cout << "y++ retorna " << y++ << " i ara y = " << y << endl;
    cout << "++y retorna " << ++y << " i ara y = " << y << endl;
    cout << "y-- retorna " << y-- << " i ara y = " << y << endl;
    cout << "--y retorna " << --y << " i ara y = " << y << endl;

 
    cout << "\nVols fer un canvi de base amb algun enter? (s/n): ";
    char resposta;
    cin >> resposta;

    if (resposta == 's' || resposta == 'S') {
        int n;
        cout << "Introdueix un enter per veure'l en binari, octal, decimal i hexadecimal: ";
        cin >> n;
        mostraEnBases(n);  
    }

    return 0;
}
