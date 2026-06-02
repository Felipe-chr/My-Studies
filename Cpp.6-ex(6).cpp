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
	cout << "Segunda diagonal: " << matrix[0][1] << " " << matrix[1][2] << " " << matrix[2][3];
}
