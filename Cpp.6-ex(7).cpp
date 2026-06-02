#include <iostream>
using namespace std;
int main()
{
	int matrixA[3][3], matrixB[3][3], matrixC[3][3];
	for (int l = 0; l <= 3; l++) {
		for (int c = 0; c <= 2; c++) {
			cout << "Valor da matrixA[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrixA[l][c];
			cout << "Valor da matrixB[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrixB[l][c];
		}
	}
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 3; c++) {
			matrixC[l][c] = matrixA[l][c] + matrixB[l][c];
			cout << "Valor da matrixC[" << l + 1 << "][" << c + 1 << "]: " << matrixC[l][c];
		}
	}
}
