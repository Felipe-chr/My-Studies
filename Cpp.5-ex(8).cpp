#include <iostream>
using namespace std;
int main()
{
    double nota[10], result=0, mdFin=0, qtt=0;
    for (int i = 0; i <= 9; i++) {
        cout << "Digite a nota "<<i+1<<": ";
        cin >> nota[i];
    }  
    for (int i = 0; i <= 9; i++) {

       result += nota[i];
       if (nota[i] > 7.0) {
           qtt++;
       }
    }
    mdFin = result / 10;
    cout << "Media final: " << mdFin<<endl;
    cout << "Quantidade de nota acima da media 7.0: " << qtt;
}
