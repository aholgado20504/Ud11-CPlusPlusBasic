#include <iostream>
#include <vector>
#include <string>
using namespace std;

string esta_ordenada(const vector<int>& llista) {
    if (llista.size() < 2) return "no esta ordenada";
    
    bool asc = true, desc = true;
    
    for (int i = 1; i < llista.size(); i++) {
        if (llista[i] < llista[i-1]) asc = false;
        if (llista[i] > llista[i-1]) desc = false;
    }
    
    if (asc) return "esta ordenada de forma ascendent";
    if (desc) return "esta ordenada de forma descendent";
    return "no esta ordenada";
}

int main() {
    vector<int> v1 = {3, 2, 1};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {1, 3, 2, 4};
    
    cout << esta_ordenada(v1) << endl;
    cout << esta_ordenada(v2) << endl;
    cout << esta_ordenada(v3) << endl;
    
    return 0;
}
