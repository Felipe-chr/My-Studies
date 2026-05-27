#include <iostream>
#include <climits> 
using namespace std;

int main()
{
    int num;

    for (int i = 0; i <= 9; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }

    int maior = INT_MIN;
    int segundoMaior = INT_MIN;

    for (int i = 0; i <= 9; i++) {
        if (num[i] > maior) {
            segundoMaior = maior;
            maior = num[i];      
        }
        else if (num[i] > segundoMaior && num[i] < maior) {
            segundoMaior = num[i]; 
        }
    }

    cout << "\nMaior valor: " << maior << endl;
    if (segundoMaior == INT_MIN) {
        cout << "Nao existe um segundo maior valor (todos os numeros sao iguais)." << endl;
    }
    else {
        cout << "Segundo maior valor: " << segundoMaior << endl;
    }

    return 0;
}
