#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n, maior, menor;
	cout << "Digite quantos numeros quer: ";
	cin >> n;
	vector<int> num(n);
	if (n <= 0) {
		cout << "Quantidade invalida." << endl;
		return 0;
	}

	for (int i = 0;i < n; i++) {
		cout << "Digite o numero: ";
		cin >> num[i];
	}
	maior = num[0];
	menor = num[0];
	for (int i = 1; i < n; i++) {
		if (num[i] > maior) {
			maior = num[i];
		}
		if (num[i] < menor) {
			menor = num[i];
		}
		cout << "O maior numero eh: " << maior << endl;
		cout << "O menor numero eh: " << menor << endl;

		return 0;
	}