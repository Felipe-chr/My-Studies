#include <iostream>
using namespace std;
int main()
{
	int matrix[5][5], somaP = 0, somaS = 0;

	for (int l = 0; l <= 4; l++) {
		for (int c = 0; c <= 4; c++) {
			cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrix[l][c];
		}
	}
	for (int i = 0; i <= 4; i++) {
		somaP += matrix[i][i];
		somaS += matrix[i][4 - i];
	}
	int diferenca = somaP - somaS;

	if (diferenca < 0) {
		diferenca = diferenca * -1;
	}

	cout << "\n--- Resultados ---" << endl;
	cout << "Soma da Diagonal Principal: " << somaP << endl;
	cout << "Soma da Diagonal Secundaria: " << somaS << endl;
	cout << "Diferenca Absoluta: " << diferenca << endl;
}