
#include <iostream>
using namespace std;
int main()
{
	int numP, desp, result;
	cout << "Quantas pessoas?: ";
	cin >> (numP);
	cout << "Quantas deu a conta?: ";
	cin >> (desp);
	result = (numP / desp) + desp * 0.10;
	cout << "A conta de cada um is: " << result;
}

