#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int N;
    double H = 0.0;

    cout << "Digite o valor de N (inteiro positivo): ";
    cin >> N;

    if (N <= 0) {
        cout << "O valor de N deve ser maior que zero!" << endl;
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        H += 1.0 / i;
    }

    cout << fixed << setprecision(4);
    cout << "O valor de H para N = " << N << " eh: " << H << endl;

    return 0;
}
