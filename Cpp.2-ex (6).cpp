#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Digite os lado 1 do triangulo: ";
    cin >> a;
    cout << "Digite os lado 2 do triangulo: ";
    cin >> b;
    cout << "Digite os lado 3 do triangulo: ";
    cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if(a==b&&b==c){
            cout << "Equilatero";
        }
        else if (a == b || a == c || b == c) {
            cout << "Isoceles.";
        }
        else {
            cout << "Escaleno.";
        }
    }
    else {
        cout << "Coloque um triangulo valido.";
    }

}
