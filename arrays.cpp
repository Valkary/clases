#include "iostream"

int main() {
    float arreglo[10] = { 1, 2, 5, 17, 42, 34, 0, 9, 23, 12 };
    float busqueda;
    std::cout << "Numero a buscar:";
    std::cin >> busqueda;
    int i = 0;
    
    for(i; i<10; i++){
        if(arreglo[i]==busqueda){
            std::cout << "Mision cumplida soldado" << std::endl;
        }
    }

    return 0;
}