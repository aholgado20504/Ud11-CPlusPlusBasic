#include <iostream>
#include <string>
using namespace std;

string rimen(const string& p1, const string& p2) {
    if (p1.length() < 3 || p2.length() < 3) return "no rimen";
    
    string ultima3_p1 = p1.substr(p1.length()-3);
    string ultima3_p2 = p2.substr(p2.length()-3);
    string ultima2_p1 = p1.substr(p1.length()-2);
    string ultima2_p2 = p2.substr(p2.length()-2);
    
    if (ultima3_p1 == ultima3_p2) return "rimen";
    if (ultima2_p1 == ultima2_p2) return "rimen un poc";
    
    return "no rimen";
}

int main() {
    string paraula1, paraula2;
    cout << "Paraula 1: ";
    cin >> paraula1;
    cout << "paraula2: ";
    cin >> paraula2;
    
    cout << "'" << paraula1 << "' i '" << paraula2 << "' " << rimen(paraula1, paraula2) << endl;
    
    return 0;
}
