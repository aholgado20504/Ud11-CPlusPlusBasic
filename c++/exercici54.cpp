#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<int> lenp(const string& frase) {
    vector<int> longituds;
    stringstream ss(frase);
    string paraula;
    
    while (ss >> paraula) {
        longituds.push_back(paraula.length());
    }
    
    return longituds;
}

int main() {
    string frase = "Hola com estàs avui";
    vector<int> result = lenp(frase);
    
    for (int l : result) {
        cout << l << " ";
    }
    cout << endl;
    
    return 0;
}
