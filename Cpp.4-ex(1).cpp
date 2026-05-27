#include <iostream>
using namespace std;
int main()
{
	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 9; i >= 0; i--) {
		cout << "Numero " << i + 1 << ": " << num[i]<<endl;
	}
}
