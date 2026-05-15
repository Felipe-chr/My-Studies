#include <iostream>
using namespace std;
int main()
{
    float renda, paga=0.0;
    cout << "Digite a sua renda mensal: ";
    cin >> renda;
    if (renda <= 0) {
        cout << "Despesa.";
    }
    else if (renda < 2000.0) {
        cout << "Isento";
    }
    else if (renda < 5000.0) {
        paga = renda * 0.1;
        cout << "Valor de imposto: " << paga;
    }
    else {
        paga = renda * 0.2;
        cout << "Valor do imposto: " << paga;
    }
    }

