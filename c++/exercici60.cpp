#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> lletres_paraula(const string& paraula) {
    vector<char> lletres;
    for (char c : paraula) {
        lletres.push_back(c);
    }
    return lletres;
}

int main() {
    string paraula = "institut";
    vector<char> lletres = lletres_paraula(paraula);
    
    for (char c : lletres) {
        cout << "'" << c << "', ";
    }
    cout << endl;
    
    return 0;
}
