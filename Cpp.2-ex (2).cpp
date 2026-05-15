#include <iostream>
using namespace std;
int main()
{
    int idade;
    cout << "Digite a idade do nadador: \n";
    cin >> idade;
    if (idade < 5) {
        cout << "Coloque uma idade valida.";
    }
    else if (idade <= 10) {
        cout << "Nadador infatil.";
    }
    else if(idade<=17){
        cout << "Nadador juvenil.";
    }
    else if (idade >= 18) {
        cout << "Nadador adulto.";
    }
    
}
