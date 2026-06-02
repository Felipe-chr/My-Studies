#include <iostream>
using namespace std;
int main()
{
	int matrix[4][4], soma = 0;

	for (int l = 0; l <= 3; l++) {
		for (int c = 0; c <= 3; c++) {
			cout << "Digite o valor da matrix[" << l << "]" << "[" << c << "]: ";
			cin >> matrix[l][c];
		}
	}
	for (int l = 0; l <= 3; l++) {
		for (int c = 0; c <= 3; c++) {
			soma += matrix[l][c];
		}
	}
	cout << "Soma: " << soma;
}
