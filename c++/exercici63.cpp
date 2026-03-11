#include <iostream>
#include <stdexcept>
using namespace std;

double dividir_segur(double a, double b) {
    if (b == 0.0) {
        cout << "AVÍS: Estàs intentant dividir per zero!" << endl;
        throw runtime_error("Divisió per zero detectada");
    }
    return a / b;
}

int main() {
    try {
        double resultat = dividir_segur(10.0, 0.0);
        cout << "Resultat: " << resultat << endl;
    } catch (const exception& e) {
        cout << "Error capturat: " << e.what() << endl;
    }
    
    return 0;
}
