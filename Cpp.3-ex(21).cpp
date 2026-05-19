#include <iostream>
using namespace std;

int main() {
    int opcao;
    double num1, num2;

    do {
        cout << "\n--- Menu de Opcoes ---" << endl;
        cout << "1. Somar" << endl;
        cout << "2. Subtrair" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << "Resultado da Soma: " << (num1 + num2) << endl;
            break;

        case 2:
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << "Resultado da Subtracao: " << (num1 - num2) << endl;
            break;

        case 3:
            cout << "Saindo do programa..." << endl;
            break;

        default:
            cout << "Opcao invalida! Tente novamente." << endl;
            break;
        }

    } while (opcao != 3); 

    return 0;
}
