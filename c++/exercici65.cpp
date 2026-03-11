#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Classe base abstracta
class Animal {
protected:
    string especie;
    int edat;
    
public:
    Animal(string esp, int e) : especie(esp), edat(e) {}
    
    virtual void xerrar() = 0;
    virtual void mourem() = 0;
    virtual void quisoc() { cout << "Soc un " << especie << " de " << edat << " anys" << endl; }
    virtual ~Animal() {}
};

// Subclasses
class Cavall : public Animal {
public:
    Cavall() : Animal("Cavall", 5) {}
    void xerrar() override { cout << "Hiiiig!" << endl; }
    void mourem() override { cout << "Galopant!" << endl; }
};

class Dofi : public Animal {
public:
    Dofi() : Animal("Dofí", 3) {}
    void xerrar() override { cout << "Eee-eee!" << endl; }
    void mourem() override { cout << "Nadant!" << endl; }
};

class Abella : public Animal {
public:
    Abella() : Animal("Abella", 1) {}
    void xerrar() override { cout << "Bzzzz!" << endl; }
    void mourem() override { cout << "Volant!" << endl; }
    void picar() { cout << "Picada d'abella!" << endl; }
};

class Huma : public Animal {
protected:
    string nom;
public:
    Huma(string n) : Animal("Humà", 25), nom(n) {}
    void xerrar() override { cout << "Hola, soc " << nom << endl; }
    void mourem() override { cout << "Caminant amb dos peus" << endl; }
};

class Fiet : public Huma {
private:
    vector<string> pares;
public:
    Fiet(string n) : Huma(n) {
        pares = {"Pare1", "Mare1"};
    }
    void nompares() {
        cout << "Pares de " << nom << ": ";
        for (string p : pares) {
            cout << p << " ";
        }
        cout << endl;
    }
};

class Centaure : public Cavall {
public:
    Centaure(string n) : Cavall() {}
    void xerrar() override { cout << "Soc mig cavall mig humà!" << endl; }
    void mourem() override { cout << "Galopant com cavall però parlant com humà" << endl; }
};

class Xou {
public:
    void xerrar() { cout << "Benvinguts a l'espectacle!" << endl; }
    void mourem() { cout << "Començar el xou!" << endl; }
    void quisoc() { cout << "Soc l'espectacle més divertit!" << endl; }
};

int main() {
    // Crear llista heterogènia
    vector<Animal*> animals = {
        new Cavall(),
        new Dofi(),
        new Abella(),
        new Huma("Joan"),
        new Fiet("Fiet1"),
        new Centaure("Centaure1")
    };
    
    // Bucle que crida mètodes iguals
    cout << "=== METODES COMUNS ===" << endl;
    for (Animal* a : animals) {
        cout << "Animal: ";
        a->xerrar();
        a->mourem();
        a->quisoc();
        cout << "---" << endl;
    }
    
    // Mètodes específics
    cout << "\n=== METODES ESPECÍFICS ===" << endl;
    Fiet fiet("Fiet2");
    fiet.nompares();
    
    Abella abella;
    abella.picar();
    
    // Xou independent
    cout << "\n=== XOU ===" << endl;
    Xou x;
    x.xerrar();
    x.mourem();
    x.quisoc();
    
    // Neteja memòria
    for (Animal* a : animals) {
        delete a;
    }
    
    return 0;
}
