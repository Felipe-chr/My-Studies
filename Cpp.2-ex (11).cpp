#include <iostream>
using namespace std;
int main()
{
	int idade, peso;
	cout << "Digite sua idade: ";
	cin >> idade;
	cout << "Digite seu peso: ";
	cin >> peso;
	if (idade > 18 && idade < 69 && peso>50) {
		cout << "\nSua idade: " << idade << "\nSeu peso: " << peso << "\nVoce esta apto a doar.";

	}
	else {
		cout << "\nVoce nao esta apto pra doar.";
	}

}
