#include <iostream>
using namespace std;
int main()
{
	int numA[5], numB[5], result=0;
	for (int i = 0; i <= 4; i++) {
		cout << "Digite o numero A " << i + 1 << ": ";
		cin >> numA[i];
		cout << "Digite o numero B " << i + 1 << ": ";
		cin >> numB[i];
	}
	result = numA[0] * numB[0] + numA[1] * numB[1] + numA[2] * numB[2] + numA[3] * numB[3] + numA[4] * numB[4];
	cout << "Produto escalavel: " << result;
}
