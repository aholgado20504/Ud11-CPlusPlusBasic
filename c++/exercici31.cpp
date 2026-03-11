#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

pair<int, int> avaluar_codi(const string& secret, const string& proposta) {
    int posicio_correcta = 0;
    int nombre_existent = 0;
    
    for (int i = 0; i < 4; i++) {
        if (proposta[i] == secret[i]) {
            posicio_correcta++;
        }
    }
    
    for (char c : proposta) {
        size_t pos = secret.find(c);
        if (pos != string::npos) {
            nombre_existent++;
        }
    }
    
    return {posicio_correcta, nombre_existent - posicio_correcta};
}

int main() {
    srand(time(0));
    string secret = "";
    for (int i = 0; i < 4; i++) {
        secret += '0' + rand() % 10;
    }
    
    string proposta;
    int intent = 1;
    
    cout << "Mastermind - Codi secret de 4 xifres generat!\n";
    
    while (true) {
        cout << "Intent " << intent << ": introdueix 4 xifres: ";
        cin >> proposta;
        
        if (proposta.length() != 4) {
            cout << "Ha de ser exactament 4 xifres!\n";
            continue;
        }
        
        auto resultat = avaluar_codi(secret, proposta);
        int correctes_pos = resultat.first;
        int correctes_mal_pos = resultat.second;
        
        cout << "Posicio correcta: " << correctes_pos 
             << " | Nombre existent: " << correctes_mal_pos << endl;
        
        if (correctes_pos == 4) {
            cout << "ENHORABONA! Has encertat el codi: " << secret << endl;
            break;
        }
        
        intent++;
    }
    
    return 0;
}
