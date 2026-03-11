#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Numero: ";
    cin >> n;
    
    cout << "Digits parells: ";
    int temp = n;
    if (temp == 0) cout << "0";
    
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
        temp /= 10;
    }
    cout << endl;
    
    return 0;
}
