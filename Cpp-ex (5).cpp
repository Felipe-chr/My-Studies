#include <iostream>
#define PI 3.14159
using namespace std;
int main()
{
	float v, raio;
	cout << "Digite o raio da esfera: ";
	cin >> (raio);
	v = (3.0 / 4.0) * PI * (raio * raio * raio);
	cout << "A area da esfera equivale a: " << v;
}
