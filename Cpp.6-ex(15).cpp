#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    bool ehTriangularSuperior = true;

    for (int l = 0; l <= 2; l++) {
        for (int c = 0; c <= 2; c++) {
            cout << "Valor da matrix[" << l + 1 << "][" << c + 1 << "]: ";
            cin >> matrix[l][c];
        }
    }

    for (int l = 0; l <= 2; l++) {
        for (int c = 0; c <= 2; c++) {
            if (l > c && matrix[l][c] != 0) {
                ehTriangularSuperior = false;
                break;
            }
        }
        if (!ehTriangularSuperior) {
            break; 
        }
    }

    cout << "\n--- Resultado Final ---" << endl;
    if (ehTriangularSuperior) {
        cout << "A matriz e Triangular Superior!" << endl;
    }
    else {
        cout << "A matriz NAO e Triangular Superior!" << endl;
    }

    return 0;
}
