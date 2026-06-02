#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4];

    for (int l = 0; l <= 3; l++) {
        for (int c = 0; c <= 3; c++) {
            cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
            cin >> matrix[l][c];
        }
    }

    for (int c = 0; c <= 3; c++) {
        int aux = matrix[0][c];
        matrix[0][c] = matrix[2][c];
        matrix[2][c] = aux;
    }

    cout << "\n--- Matriz com Linhas Trocadas ---\n" << endl;
    for (int l = 0; l <= 3; l++) {
        for (int c = 0; c <= 3; c++) {
            cout << matrix[l][c] << "\t";
        }
        cout << endl; 
    } 
    return 0;
} 
