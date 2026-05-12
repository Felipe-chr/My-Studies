#include <iostream>
using namespace std;
int main()
{
    int valor;
    cout << "Digite o valor da compra.\n";
    cin >> valor;
    if (valor >= 500) {
        cout << "Frete gratis.";
    }
    else {
        valor += 20;
        cout << "Frete pago. Valor a pagar: " << valor;
    }
}
