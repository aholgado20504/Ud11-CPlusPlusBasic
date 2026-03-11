#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int any_actual = 2026;
    
    cout << "Any actual " << any_actual << endl;
    cout << "Nom\t\tData naixement\tAnys que fara aquest any" << endl;
    
    cout << "Pere\t\t" << 2000 << "\t\t" << (any_actual - 2000) << endl;
    cout << "Maria\t\t" << 1999 << "\t\t" << (any_actual - 1999) << endl;
    cout << "Anna\t\t" << 2005 << "\t\t" << (any_actual - 2005) << endl;
    
    return 0;
}
