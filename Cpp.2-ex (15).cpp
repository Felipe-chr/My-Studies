#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num < 10 || num > 20) {
        cout << "O numero esta fora do intervalo." << endl;
    }
    else {
        cout << "O numero esta dentro do intervalo." << endl;
    }

    return 0;
}
