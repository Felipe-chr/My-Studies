#include <iostream>
using namespace std;

int main()
{
    int vetor[5];

    for (int i = 0; i <= 4; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int ultimo = vetor[4];

    for (int i = 4; i > 0; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[0] = ultimo;

    cout << "\nVetor após a rotação: ";
    for (int i = 0; i <= 4; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
