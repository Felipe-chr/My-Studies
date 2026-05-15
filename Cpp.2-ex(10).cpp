#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a,b, c,temp;
	cout << "Digite o numero 1: ";
	cin >>a;
	cout << "Digite o numero 2: ";
	cin >> b;
	cout << "Digite o numero 3: ";
	cin >> c;
	if (a > b) { temp = a; a = b; b = temp; }
	if (a > c) { temp = a; a = c; c = temp; }
	if (b > c) { temp = b; b = c; c = temp; }
	cout << "Ordem crescente: " << a << ", " << b << ", " << c;
	
}