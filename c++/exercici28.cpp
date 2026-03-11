#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void comptar_vocals(const string& paraula) {
    int a=0, e=0, i=0, o=0, u=0;
    for (char c : paraula) {
        char minus = tolower(c);
        if (minus == 'a') a++;
        else if (minus == 'e') e++;
        else if (minus == 'i') i++;
        else if (minus == 'o') o++;
        else if (minus == 'u') u++;
    }
    cout << "Hi ha " << a << " a's, " << e << " e's, " << i << " i's, " 
         << o << " o's i " << u << " u's" << endl;
}

int main() {
    comptar_vocals("Ratapinyada");
    return 0;
}
