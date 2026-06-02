#include <iostream>
using namespace std;
int main()
{
	int matrix[3][3];
	bool sim = true;

	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
			cin >> matrix[l][c];
		}
	}
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			if (matrix[l][c] != matrix[c][l]) {
				sim = false;
				break;
			}
		}
		if (!sim) {
			break;
		}
	}
	if (sim) {
		cout << "A matriz e Simetrica!" << endl;
	}
	else {
		cout << "A matriz e Assimetrica!" << endl;
	}
	
	

}
