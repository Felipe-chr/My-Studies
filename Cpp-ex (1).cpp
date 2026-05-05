
#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
	int tempF, tempC;

	cout << ("Digite sua temperatura em Fahrenheit: ");
	cin >> tempF;
	tempC = (tempF - 32) * 5 / 9;
	cout << ("Sua temperatura em Celius: ") << tempC;
}

