#include <iostream>
#include <vector>
#include <string>
using namespace std;

void elements_parells(const vector<string>& paraules) {
    for (int i = 1; i < paraules.size(); i += 2) {
        cout << paraules[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<string> llista = {"ana", "bernardo", "carla", "david", "eva"};
    elements_parells(llista);
    return 0;
}
