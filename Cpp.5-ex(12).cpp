#include <iostream>
using namespace std;

int main()
{
    int vetor[6];
    bool ehPalindromo = true;

    for (int i = 0; i <= 5; i++) {
        cout << "Digite o numero da posicao " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 3; i++) {
        if (vetor[i] != vetor[5 - i]) {
            ehPalindromo = false;
            break;              
        }
    }

    cout << "\nResultado: ";
    if (ehPalindromo) {
        cout << "O vetor E um palindromo!" << endl;
    }
    else {
        cout << "O vetor NAO e um palindromo." << endl;
    }

    return 0;
}
