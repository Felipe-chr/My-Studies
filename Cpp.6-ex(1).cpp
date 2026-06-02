#include <iostream>
using namespace std;
int main()
{
	int matrix[3][3] = { {1,0,0}
						,{0,1,0}
						,{0,0,1} };
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			cout << matrix[l][c];
		}
		cout << endl;
	}
}
