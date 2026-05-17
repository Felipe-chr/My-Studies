#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string homoHet;
    int n;
    double coef; 
    double smd = 0, mArit, med, smv = 0, var, desv;

    cout << "Digite quantos numeros quer verificar: ";
    cin >> n;
    
    vector<double> num(n);

    for (int i = 0; i < n; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num[i];
        smd += num[i];
    }

    mArit = smd / n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                double temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    if (n % 2 != 0) {
        med = num[n / 2];
    } else {
        med = (num[(n / 2) - 1] + num[n / 2]) / 2.0;
    }

    for (int k = 0; k < n; k++) {
        smv += (num[k] - mArit) * (num[k] - mArit);
    }
    var = smv / (n - 1);

    desv = sqrt(var);
    coef = (desv / mArit) * 100;

    if (coef <= 30.0) {
        homoHet = "HOMOGENEO";
    } else {
        homoHet = "HETEROGENEO";
    }

    cout << "\nRESULTADOS:" << endl;
    cout << "Media aritmetica: " << mArit << endl;
    cout << "Mediana: " << med << endl;
    cout << "Variancia amostral: " << var << endl;
    cout << "Desvio padrao: " << desv << endl;
    cout << "Coeficiente de variacao: " << coef << "%" << endl;
    cout << "Conjunto: " << homoHet << endl;

    return 0;
}