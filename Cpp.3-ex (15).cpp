#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n, enc=0;
	n = 10;
	vector<int> qtt(10);
	for (int i = 0; i < n;i++) 
	{
		cout << "Digite o numero " << i+1 << ": ";
		cin >> qtt[i];
	}
	for (int i = 0; i < n;i++) 
	{
		if (qtt[i] > 10 && qtt[i] < 20) 
		{
			enc++;
				
		}
		
	}
	cout << "Tem " << enc << " numeros entre 10 e 20.";
	if (enc == 0)
	{
		cout << "Sem numeros entre 10 e 20.";
	}
}
