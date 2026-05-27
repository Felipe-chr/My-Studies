#include <iostream>
using namespace std;
int main()
{
    int num[8], maior=0, menor=0, posMen=0, posMai=0;
    for (int i = 0; i <= 7; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }
    maior = num[0];
    menor = num[0];


    for (int i = 1; i <= 7; i++) {
            if (num[i]>maior) {
                maior = num[i];
                posMai = i;
            }
            if (num[i]<menor) {
                menor = num[i];
                posMen = i;
            }
    }
    cout << "\n===Resultados===\n";
    cout << "Maior: " << maior<<endl;
    cout << "Menor: " << menor<<endl;
    cout << "Posicao do maior: " << posMai+1 << endl;
    cout << "Posicao do menor: " << posMen+1;

}
