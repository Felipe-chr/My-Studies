#include <iostream>
using namespace std;

int main() {
    double populacaoA = 80000;
    double populacaoB = 200000;
    double taxaA = 0.03;  
    double taxaB = 0.015; 
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaA;
        populacaoB += populacaoB * taxaB; 
        anos++;                          
    }

    cout << "O pais A ultrapassara o pais B em: " << anos << " anos." << endl;
    cout << "Populacao final de A: " << (int)populacaoA << " habitantes." << endl;
    cout << "Populacao final de B: " << (int)populacaoB << " habitantes." << endl;

    return 0;
}
