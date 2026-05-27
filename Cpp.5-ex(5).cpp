#include <iostream>
using namespace std;
int main()
{
	int num[10];
	for (int i = 0; i <= 9; i++) {
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> num[i];
	}
	for (int i = 0; i <= 9; i++) {
		if (num[i] <= 0) {
			num[i] = 0;
		}
		cout << "Numero " << i + 1 << ": "<<num[i]<<endl;
	}
}