#include <iostream>
using namespace std;
int main()
{
	int matrix[3][2];
    for (int l = 0; l <=2 ; l++) {
        for (int c = 0; c <= 1; c++) {
            cout << "Insira o valor da matrix[" << l << "][" << c << "]: ";
            cin >> matrix[l][c];
        }
    }
    for (int c = 0; c <= 1; c++) {
        for (int l = 0; l <= 2; l++) {
            cout << matrix[c][l]<<" ";
        }
        cout << endl;
    }
}
