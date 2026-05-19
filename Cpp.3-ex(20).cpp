#include <iostream>
#include <string>
using namespace std;
	int main()
	{
		string nome, sexo;
		int idade;
		cout << "Digite seu nome: ";
		cin >> nome;
		cout << "\nDigite sua idade: ";
		cin >> idade;
		cout << "\nDigite seu sexo(M ou F): ";
		cin >> sexo;
		if ((sexo != "M" && sexo != "F") || (idade < 0 || idade>150) || (nome.size() > 3)) {
			cout << "Algum dado de login esta errado.";
		}
		else {
			cout << "Acesso permitido.";
		}
	}
