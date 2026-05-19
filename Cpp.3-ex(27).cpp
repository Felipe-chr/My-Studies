#include <iostream>
using namespace std;

int main() {
    int numero;
    int i = 0;
    bool ehQuadradoPerfeito = false;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Numeros negativos nao possuem raiz quadrada real!" << endl;
        return 1;
    }

    while (i * i <= numero) {
        if (i * i == numero) {
            ehQuadradoPerfeito = true;
            break; 
        }
        i++;
    }

    if (ehQuadradoPerfeito) {
        cout << "O numero " << numero << " eh um quadrado perfeito (" << i << "x" << i << ")." << endl;
    }
    else {
        cout << "O numero " << numero << " nao eh um quadrado perfeito." << endl;
    }

    return 0;
}
