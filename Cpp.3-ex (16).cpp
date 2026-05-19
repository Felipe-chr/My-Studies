#include <iostream>
using namespace std;

int main()
{
    int smI = 0, media, num = 1, i = 0;

    while (num != 0) {
        cout << "Insira a idade (ou 0 para sair): ";
        cin >> num;

        if (num != 0) {
            smI += num; 
            i++;       
        }
    }

    
    if (i > 0) {
        media = smI / i;
        cout << "A media de idade foi: " << media << endl;
    }
    else {
        cout << "Nenhuma idade foi inserida." << endl;
    }

    return 0;
}
