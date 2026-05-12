#include <iostream>
using namespace std;
int main()
{
    float saldo=0.0, ch, dep;
    cout << "Voce quer: \n(1)Sacar\n(2)Depositar\n(3)Versaldo\n";
    cin >> ch;
    if (ch == 1) {
        if (saldo > 0.0) {
            cout << "Quanto quer retirar?";
        }
        else {
            cout << "Voce nao tem saldo na conta.";
        }
    }
    else if (ch == 2) {
        cout << "Quanto quer depositar?: ";
        cin >> dep;
        saldo = dep;
    }
    else if (ch == 3) {
        cout << "Seu saldo equivale a: " << saldo << " reais.";
    }
    else {
        cout << "digite um numero valido.";
    }

}