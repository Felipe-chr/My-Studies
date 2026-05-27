#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num[10];
	vector<int> par;
	for (int i = 0; i <= 9; i++) {
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> num[i];
	}
	for (int i = 0; i <= 9; i++) {
		
		if (num[i] % 2 == 0) {
			par.push_back(num[i]);
		}
	}
	cout << "\nNumeros pares digitados:" << endl;
	for (int i = 0; i < par.size(); i++) {
		cout << par[i] << " ";
	}
}
