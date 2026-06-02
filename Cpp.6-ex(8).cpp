#include <iostream>
using namespace std;
int main()
{
	int matrix[3][3], X, result[3][3];
	cout << "Digite o valor de X: ";
	cin >> X;
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrix[l][c];
			result[l][c] = matrix[l][c] * X;
		}
	}
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			cout << "O valor da matrix[" << l + 1 << "][" << c + 1 << "] por X equivale a: " << result[l][c]<<endl;
		}
	}
	
}
