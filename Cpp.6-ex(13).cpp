#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5], X;
    bool encontrado = false;

    for (int l = 0; l <= 4; l++) {
        for (int c = 0; c <= 4; c++) {
            cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
            cin >> matrix[l][c];
        }
    }

    cout << "\nInforme o valor de X para buscar: ";
    cin >> X;


    for (int l = 0; l <= 4; l++) {
        for (int c = 0; c <= 4; c++) {
            if (X == matrix[l][c]) {
                cout << "Numero " << X << " encontrado na Linha " << l + 1 << ", Coluna " << c + 1 << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "O valor " << X << " nao esta presente na matrix." << endl;
    }

    return 0;
}
