#include <iostream>
using namespace std;
int main()
{
	int qtt;
	cout << "Insira a quantidade do produte em estoque: ";
	cin >> qtt;
	while (qtt > 0) {
		qtt--;
		cout << "Produto vendido. Quantidade em estoque: "<<qtt<<"\n";
	}
}
