#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Numero (1-900000): ";
    cin >> n;
    
    string s = to_string(n);
    cout << "Te " << s.length() << " digits" << endl;
    
    return 0;
}
