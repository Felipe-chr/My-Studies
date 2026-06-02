#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3], vetor[3];
    for (int l = 0; l <= 2; l++) {
        for (int c = 0; c <= 2; c++) {
            cout << "Insira o valor da matrix[" << l << "][" << c << "]: ";
            cin >> matrix[l][c];
        }
    }
    for (int c = 0; c <= 2; c++) {
        for (int l = 0; l <= 2; l++) {
            vetor[c] += matrix[l][c]; 
        }
    }
       
    for (int c = 0; c <= 2; c++) {
        cout << "Valor da soma da Coluna " << c + 1 << ": " << vetor[c] << endl;
    }
}
