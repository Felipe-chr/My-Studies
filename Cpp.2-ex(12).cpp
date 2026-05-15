#include <iostream>
using namespace std;
int main()
{
	string user;
	int login, senha;
	cout << "Digite seu usuario: ";
	cin >> user;
	cout << "Digite seu codigo: ";
	cin >> login;
	cout << "Digite seu senha: ";
	cin >> senha;
	
		if (login == 99 && senha == 123 && user == "admin"){
		cout << "Acesso liberado.";
	}
	else{
		cout << "Acesso negado.";
	}
	
}
