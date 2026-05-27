#include <iostream>
using namespace std;
int main()
{
    int vetor1[5], vetor2[5], vetor12[10];
    for (int i = 0; i <= 4; i++) {
        cout << "Digite o valor " << i + 1 << " do vetor 1: ";
        cin >> vetor1[i];
        cout << "Digite o valor " << i + 1 << " do vetor 2: ";
        cin >> vetor2[i];
    }
    for (int i = 0; i <= 4; i++) {
        vetor12[i] = vetor1[i];
    }
    for (int i = 0; i <= 4; i++) {
        vetor12[i+5] = vetor2[i];
    }
    for (int i = 0; i <= 9; i++) {
        cout << "Valor " << i + 1 << " do vetor12: " << vetor12[i]<<endl;
    }
}
