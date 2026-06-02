#include <iostream>
using namespace std;
int main()
{
	int matrix[4][5], soma[4] = {0};
	
	for (int l = 0; l <= 3; l++) {
		for (int c = 0; c <= 4; c++) {
			cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrix[l][c];
		}
	}
	
	for (int l = 0; l <= 3; l++) {
		for (int c = 0; c <= 4; c++) {
			soma[l] += matrix[l][c];
		}
	}
	int maior = soma[0];

	for (int l = 0; l <= 3; l++) {
		if (maior < soma[l]) {
			maior = soma[l];
		 }
		
	}
	cout << "Maior valor: " << maior;

}
