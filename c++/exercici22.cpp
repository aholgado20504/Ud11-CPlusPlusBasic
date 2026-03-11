#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int comptar_majuscules(const string& s) {
    int comptador = 0;
    for (char c : s) {
        if (isupper(c)) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    cout << comptar_majuscules("HolaMOn") << endl;
    cout << comptar_majuscules("TotsSOMMajuscules") << endl;
    cout << comptar_majuscules("totssominuscules") << endl;
    cout << comptar_majuscules("A") << endl;
    return 0;
}
