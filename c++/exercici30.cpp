#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

void intro() {
cout << "En una època on els gegants governen Menorca. Nosaltres necessitem menjar,\n"
     "Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.\n"
     "Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran\n"
     "i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.\n";
}

string canviTalaiot() {
string talaiot;
while (talaiot != "1" && talaiot != "2") {
    cout << "A quin Talaiot vols anar? Introdueixi 1 o 2: ";
    cin >> talaiot;
}
return talaiot;
}

bool trobada(string canviTalaiot) {
cout << "T'estas apropant al talaiot...\n";
this_thread::sleep_for(chrono::seconds(2));
cout << "Està fosc i és tenebrós...\n";
this_thread::sleep_for(chrono::seconds(2));
cout << "Un gran gegant salta davant teu, t'agafa i ...\n\n";
this_thread::sleep_for(chrono::seconds(2));

srand(static_cast<unsigned int>(time(0)));
int gegantamic = rand() % 2 + 1;
if (canviTalaiot == to_string(gegantamic)) {
    cout << "Et convida a menjar...\n";
    return true;
} else {
    cout << "Se't menja d'un mos...ÑAMÑAMÑAM\n";
    return false;
}
}

int main() {
string partidaNova;
int punts = 0;

cout << "Benvingut al joc dels talaiots!\n\n";

while (partidaNova != "n" && partidaNova != "no") {
    intro();
    string nTalaiot = canviTalaiot();
    
    if (trobada(nTalaiot)) {
        punts += 10;
        cout << "Guanyes 10 punts! Total: " << punts << endl;
    } else {
        cout << "Has perdut! Punts finals: " << punts << endl;
        break;
    }
    
    cout << "Vols continuar jugant? (si/no): ";
    cin >> partidaNova;
    cout << "\n";
}

if (punts > 0) {
    cout << "Partida acabada! Punts totals aconseguits: " << punts << endl;
}

return 0;
}
