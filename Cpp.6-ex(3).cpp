#include <iostream>
using namespace std;
int main()
{
    int matrix[5][5];

    for (int l = 0; l <= 4; l++) {
        for (int c = 0; c <= 4; c++) {
            cout << "Insira o valor da matrix[" << l << "][" << c << "]: ";
            cin >> matrix[l][c];
        }
    }
    int maior = matrix[0][0];
    for (int l = 0; l <= 4; l++) {
        for (int c = 0; c <= 4; c++) {
            if (maior < matrix[l][c]) {
                maior = matrix[l][c];
            }
        }
    }
    cout << "Maior valor: " << maior;
}
