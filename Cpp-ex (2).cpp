

#include <iostream>
using namespace std;
int main()
{
    int baseM, baseN, high, result;
    cout << "Digite a base maior do trapezio: "<<endl;
    cin >> (baseM);
    cout << "Digite a base menor do trapezio: " << endl;
    cin >> (baseN);
    cout << "Digite a altura do trapezio: " << endl;
    cin >> (high);
   result = ((baseM + baseN) * high) / 2;
   cout << "A area equivale a: " << result;
}
