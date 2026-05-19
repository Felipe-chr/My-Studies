#include <iostream>
using namespace std;
int main()
{
	int senha = 1234, s=0;
	while (s != senha) {
		cout << "Digite a senha: ";
		cin >> s;
	}
}
