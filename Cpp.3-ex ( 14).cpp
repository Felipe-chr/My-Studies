#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ini, fim, sm = 0;
    cout << "Digite o inicio do intervalo: \n";
    cin >> ini;
    cout << "Digite o fim do intervalo: \n";
    cin >> fim;

    for (int i = ini; i <= fim; i++) {
        if (i % 2 != 0) {
            sm += i;     
        }
    }

   
    cout << "Soma dos numeros impares: " << sm << endl;
return 0;
}
