#include <iostream>
#include <vector>
#include <unordered_set>

bool hi_ha_duplicats(const std::vector<int>& llista) {
    std::unordered_set<int> vistos;
    for (int element : llista) {
        if (!vistos.insert(element).second) {
            return true;  
        }
    }
    return false;  
}

int main() {
    
    std::vector<int> llista1 = {1, 2, 3, 4, 5};
    std::vector<int> llista2 = {1, 2, 3, 2, 5};
    std::vector<int> llista3 = {4, 4, 1, 2, 3};
    
    std::cout << "Llista1: ";
    for (int x : llista1) std::cout << x << " ";
    std::cout << "-> " << (hi_ha_duplicats(llista1) ? "SI" : "NO") << std::endl;
    
    std::cout << "Llista2: ";
    for (int x : llista2) std::cout << x << " ";
    std::cout << "-> " << (hi_ha_duplicats(llista2) ? "SI" : "NO") << std::endl;
    
    std::cout << "Llista3: ";
    for (int x : llista3) std::cout << x << " ";
    std::cout << "-> " << (hi_ha_duplicats(llista3) ? "SI" : "NO") << std::endl;
    
    return 0;
}
