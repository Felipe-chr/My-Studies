#include <iostream>
using namespace std;

int main()
{
    int vetor[8];
    bool crescente = true;
    bool decrescente = true;

    for (int i = 0; i <= 7; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 7; i++) {
        if (vetor[i] >= vetor[i + 1]) {
            crescente = false;
        }
        if (vetor[i] <= vetor[i + 1]) {
            decrescente = false; 
        }
    }

    cout << "\nResultado da analise: ";
    if (crescente) {
        cout << "Estritamente crescente." << endl;
    }
    else if (decrescente) {
        cout << "Estritamente decrescente." << endl;
    }
    else {
        cout << "Desordenados (ou contem elementos repetidos vizinhos)." << endl;
    }

    return 0;
}
