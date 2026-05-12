#include <iostream>
using namespace std;

int main() {
    int idade, estudante;
    float preco = 20.0;

    cout << "Digite a idade: ";
    cin >> idade;
    cout << "É estudante? (1-Sim / 0-Não): ";
    cin >> estudante;

    if (estudante == 1 || idade > 65) {
        preco = 10.0;
        cout << "Desconto aplicado! Valor: R$ " << preco << endl;
    }
    else {
        cout << "Valor integral: R$ " << preco << endl;
    }

    return 0;
}