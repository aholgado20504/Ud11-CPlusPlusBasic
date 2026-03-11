#include <iostream>
#include <vector>
using namespace std;

void mostrar_majors_que(const vector<int>& tupla, int limit) {
    for (int x : tupla) {
        if (x > limit) {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> edats;
    int edat;
    
    cout << "Introdueix edats (0 per acabar): ";
    while (cin >> edat && edat != 0) {
        edats.push_back(edat);
    }
    
    cout << "Majors de 18 anys: ";
    mostrar_majors_que(edats, 18);
    
    return 0;
}
