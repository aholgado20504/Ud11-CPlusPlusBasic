#include <iostream>
#include <bitset>   // per mostrar en binari
using namespace std;

// Funcio per mostrar un enter en diferents bases
void mostraEnBases(int n) {
    cout << "\n=== Representacions de " << n << " ===\n";
    cout << "Binari      : " << bitset<32>(n) << endl;   // 32 bits [web:94][web:99]
    cout << "Octal       : " << oct << n << endl;       // base 8 [web:91][web:98]
    cout << "Decimal     : " << dec << n << endl;       // base 10
    cout << "Hexadecimal : " << hex << n << endl;       // base 16
    cout << dec; // tornem a decimal per seguretat
}

int main() {
    char tipus;   // 'i' per int, 'd' per double
    char op;      // + - * / %
    int    ai, bi;
    double ad, bd;

    cout << "Vols treballar amb enters (i) o reals (d)? ";
    cin >> tipus;

    cout << "Introdueix l'operador (+, -, *, /, %): ";
    cin >> op;

    if (tipus == 'i') {
        cout << "Introdueix dos enters: ";
        cin >> ai >> bi;

        switch (op) {
        case '+':
            cout << ai << " + " << bi << " = " << ai + bi << endl;
            break;
        case '-':
            cout << ai << " - " << bi << " = " << ai - bi << endl;
            break;
        case '*':
            cout << ai << " * " << bi << " = " << ai * bi << endl;
            break;
        case '/':
            if (bi != 0)
                cout << ai << " / " << bi << " = " << ai / bi << endl;
            else
                cout << "Error: divisio per zero!" << endl;
            break;
        case '%':
            if (bi != 0)
                cout << ai << " % " << bi << " = " << ai % bi << endl;
            else
                cout << "Error: modul per zero!" << endl;
            break;
        default:
            cout << "Operador invalid per enters." << endl;
            break;
        }

        // Nova funcionalitat: canvi de base
        char resp;
        cout << "\nVols veure algun enter en bin, octal, decimal i hex? (s/n): ";
        cin >> resp;
        if (resp == 's' || resp == 'S') {
            int n;
            cout << "Introdueix l'enter: ";
            cin >> n;
            mostraEnBases(n);  // crida a la funcio de bases
        }

    } else if (tipus == 'd') {
        cout << "Introdueix dos reals: ";
        cin >> ad >> bd;

        switch (op) {
        case '+':
            cout << ad << " + " << bd << " = " << ad + bd << endl;
            break;
        case '-':
            cout << ad << " - " << bd << " = " << ad - bd << endl;
            break;
        case '*':
            cout << ad << " * " << bd << " = " << ad * bd << endl;
            break;
        case '/':
            if (bd != 0.0)
                cout << ad << " / " << bd << " = " << ad / bd << endl;
            else
                cout << "Error: divisio per zero!" << endl;
            break;
        case '%':
            cout << "L'operador % no te sentit amb reals." << endl;
            break;
        default:
            cout << "Operador invalid per reals." << endl;
            break;
        }

        // Tanmateix, la part de canvi de base te sentit nomes per enters
        char resp;
        cout << "\nVols veure algun enter en bin, octal, decimal i hex? (s/n): ";
        cin >> resp;
        if (resp == 's' || resp == 'S') {
            int n;
            cout << "Introdueix l'enter: ";
            cin >> n;
            mostraEnBases(n);
        }

    } else {
        cout << "Tipus invalid. Usa 'i' o 'd'." << endl;
    }

    return 0;
}