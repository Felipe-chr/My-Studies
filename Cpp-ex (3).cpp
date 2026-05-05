

#include <iostream>
using namespace std;
int main()
{
	int altura, largura, azulejo, result;
	cout << "Digite sua altura: ";
	cin >> (altura);
	cout << "Digite sua largura: ";
	cin >> (largura);
	cout << "Digite a dimensao do azulejo: ";
	cin >> (azulejo);

	result = (altura * largura) / (azulejo * azulejo);
	cout << "A quantidade de azulejos que cabem na parede sao: " << result;
}
