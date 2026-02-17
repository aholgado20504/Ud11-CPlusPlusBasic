#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Escriu el nom d'A: ";
    cin>>a;
    cout << "Escriu el nom de B: ";
    cin>>b;
    cout<<a.insert(a.size(),b)<<endl;
    return 0;
}