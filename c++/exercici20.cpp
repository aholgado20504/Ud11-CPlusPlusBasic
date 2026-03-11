#include <iostream>
#include <vector>
#include <string>
using namespace std;

string paraula_mes_llarga(const vector<string>& paraules) {
    if (paraules.empty()) return "";
    string max_paraula = paraules[0];
    for (string p : paraules) {
        if (p.length() > max_paraula.length()) {
            max_paraula = p;
        }
    }
    return max_paraula;
}

int main() {
    vector<string> v = {"Hola", "Ramis", "IES", "Paraula"};
    cout << paraula_mes_llarga(v) << endl;
    return 0;
}
