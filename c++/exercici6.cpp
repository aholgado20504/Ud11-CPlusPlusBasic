#include <iostream>
using namespace std;

int main() {
    char tipus;      // 'i' per int, 'd' per double
    char op;         // + - * / %
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
    } else {
        cout << "Tipus invalid. Usa 'i' o 'd'." << endl;
    }

    return 0;
}
