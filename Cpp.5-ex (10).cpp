#include <iostream>
using namespace std;

int main()
{
    int num[15];
    int alvo, frequencia = 0;

    for (int i = 0; i <= 14; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "\nDigite o numero alvo para buscar: ";
    cin >> alvo;

    for (int i = 0; i <= 14; i++) {
        if (num[i] == alvo) {
            frequencia++; 
        }
    }

    cout << "O numero " << alvo << " aparece " << frequencia << " vezes no vetor." << endl;

}
