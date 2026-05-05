

#include <iostream>
#define dolar 4.95
using namespace std;
int main()
{
	float real, result;
	cout << "Quantos reais?: ";
	cin >> (real);
	result = real / dolar;
	cout << real << " reais conseguem comprar: " << result << " dolares.";
}
