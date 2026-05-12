#include <iostream>
using namespace std;
int main()
{
	float sal, aum=0, cod;
	cout << "Digite seu salario: ";
		cin >> sal;
		cout << "Digite seu o codigo do seu cargo(1 a 3): ";
		cin >> cod;
		if (cod == 1) {
			aum = sal * 0.1;
			sal += aum;
			cout << "Novo salario: R$" << sal;
		}
		else if (cod == 2) {
			aum = sal * 0.2;
			sal += aum;
			cout << "Novo salario: R$" << sal;
		}
		else if (cod == 3) {
			aum = sal * 0.3;
			sal += aum;
			cout << "Novo salario: R$" << sal;
		}
		else {
			cout << "Digite um codigo valido.";
		}
}
