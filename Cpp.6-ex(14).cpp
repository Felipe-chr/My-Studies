#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4];
    int somaBorda = 0;

    for (int l = 0; l <= 3; l++) {
        for (int c = 0; c <= 3; c++) {
            cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
            cin >> matrix[l][c];
        }
    }

    for (int l = 0; l <= 3; l++) {
        for (int c = 0; c <= 3; c++) {
            if (l == 0 || l == 3 || c == 0 || c == 3) {
                somaBorda += matrix[l][c];
            }
        }
    }

    cout << "\nSoma de todos os elementos da borda: " << somaBorda << endl;

    return 0;
}
