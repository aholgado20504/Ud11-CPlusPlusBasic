#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double capital, interes;
    int anys;
    
    cout << "Capital inicial (50000-800000€): ";
    cin >> capital;
    cout << "Interes (% 0.5-13): ";
    cin >> interes;
    cout << "Anys (3-40): ";
    cin >> anys;
    
    double cfinal = capital * pow(1 + interes/100, anys);
    
    cout << fixed << setprecision(2);
    cout << capital << "€ a " << interes << "% durant " << anys 
         << " anys = " << cfinal << "€" << endl;
    
    return 0;
}
