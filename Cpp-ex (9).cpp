
#include <iostream>
using namespace std;
int main()
{
	int salario, result, desc;
	cout << "Digite seu salario bruto: ";
	cin >> (salario);
	desc = salario * 0.08;
	result = salario - desc;
	cout << "Seu salario liquido equivale a: " << result;
}
