#include <iostream>
#include <string>
using namespace std;

int binari_a_decimal(string binari) {
    int decimal = 0;
    for (char c : binari) {
        decimal = decimal * 2 + (c - '0');
    }
    return decimal;
}

int main() {
    string b1 = "1010";
    string b2 = "1101";
    string b3 = "11111111";
    
    cout << b1 << " = " << binari_a_decimal(b1) << endl;
    cout << b2 << " = " << binari_a_decimal(b2) << endl;
    cout << b3 << " = " << binari_a_decimal(b3) << endl;
    
    return 0;
}
