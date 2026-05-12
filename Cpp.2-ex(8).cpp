#include <iostream>
using namespace std;
int main()
{
	int dia;
	cout << "DIgite seu dia de 1 a 7: ";
	cin >> dia;
	if (dia == 1 || dia == 7) {
		cout << "Fim de semana.";
	}
	else if (dia > 1 && dia < 7) {
		cout << "Dia util.";
	}
	else {
		cout << "Digite um dia valido.";
	}
}
