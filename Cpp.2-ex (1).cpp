#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um numero inteiro: \n";
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0) {
        cout << "Seu numero tem divisibilidade por 3 e por 5.";
    }
    else {
        cout << "Seu numero nao tem divisibilidade por 3 ou 5.";
    }
}
