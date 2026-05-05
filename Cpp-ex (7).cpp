

#include <iostream>
using namespace std;
int main()
{
	float km, l, kml;
	cout << "Quantos km?: ";
	cin >> (km);
	cout << "Quantos litros?: ";
	cin >> (l);
	kml = km / l;
	cout << "O consumo médio do carro equivale a: " << kml<< "km/l";
}
