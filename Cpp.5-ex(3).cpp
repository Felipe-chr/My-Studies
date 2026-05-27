#include <iostream>
using namespace std;
int main()
{
	int num[10] = {13, 52, 123, 35, 64, 321, 123, 8, 9, 123}, veri, result=0;

	cout << "-===Verificacao de numero===-\n";
	cout << "Digite seu numero: ";
	cin >> veri;
	for (int i = 0; i <= 9; i++) {
		if (veri == num[i]) {
			result = veri;
		}
	}
	if (veri == result) {
		cout << "\nSeu numero esta dentro do vetor.";
	}
	else {
		cout << "\nSeu numero esta fora do vetor.";

	}
}
