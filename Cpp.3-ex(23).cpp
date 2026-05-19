#include <iostream>
using namespace std;

int main() {
    int numero, numeroInvertido = 0, resto;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    int original = numero;

    while (numero != 0) {
        resto = numero % 10;                    
        numeroInvertido = (numeroInvertido * 10) + resto;
        numero /= 10;                           
    }

    cout << "Numero original: " << original << endl;
    cout << "Numero invertido: " << numeroInvertido << endl;

    return 0;
}
