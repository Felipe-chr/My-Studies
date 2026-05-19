#include <iostream>
#include <string>
using namespace std;

int main() {
    int numeroDecimal;
    string numeroBinario = "";

    cout << "Digite um numero decimal positivo: ";
    cin >> numeroDecimal;

    if (numeroDecimal == 0) {
        numeroBinario = "0";
    }
    else {
        while (numeroDecimal > 0) {
            int resto = numeroDecimal % 2;

           
            numeroBinario = to_string(resto) + numeroBinario;

            numeroDecimal /= 2; 
        }
    }

    cout << "O equivalente em binario eh: " << numeroBinario << endl;

    return 0;
}
