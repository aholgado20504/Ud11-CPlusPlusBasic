#include <iostream>
#include <string>
using namespace std;

string crear_repetits(int n, char c) {
    return string(n, c);
}

int main() {
    cout << crear_repetits(5, 'a') << endl;
    cout << crear_repetits(3, '*') << endl;
    cout << crear_repetits(0, 'x') << endl;
    return 0;
}
