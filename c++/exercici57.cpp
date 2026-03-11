#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> concatenar_llistes(const vector<string>& l1, const vector<string>& l2, const string& connector) {
    vector<string> resultat;
    for (int i = 0; i < l1.size() && i < l2.size(); i++) {
        resultat.push_back(l1[i] + connector + l2[i]);
    }
    return resultat;
}

int main() {
    vector<string> l1 = {"sub", "supra"};
    vector<string> l2 = {"campió", "campiona"};
    string conn = "-";
    
    vector<string> res = concatenar_llistes(l1, l2, conn);
    
    for (string s : res) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
