#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int vetor[10];
	vector<int>par, impar;
	for (int i = 0; i <= 9; i++) {
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> vetor[i];
	}
	for (int i = 0; i <= 9; i++) {
		if (vetor[i] % 2 == 0) {
			par.push_back(vetor[i]);
		}
		else {
			impar.push_back(vetor[i]);
		}
	}
	cout << "\nNumeros Pares: ";
	for (int i = 0; i < par.size(); i++) {
		cout << par[i] << " ";
	}
	cout << endl;

	cout << "Numeros Impares: ";
	for (int i = 0; i < impar.size(); i++) {
		cout << impar[i] << " ";
	}
}