#include <iostream>
#include <vector>
#include <string>
using namespace std;

int nums_que_comencen_per(const vector<string>& noms) {
    int comptador = 0;
    for (string nom : noms) {
        if (!nom.empty() && nom[0] == 'a') {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    vector<string> noms = {"anna", "bernardo", "alfred", "carla", "antoni"};
    cout << nums_que_comencen_per(noms) << endl;
    return 0;
}
