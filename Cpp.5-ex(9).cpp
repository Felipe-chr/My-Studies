#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int vetorA[5], vetorB[5];
	vector<int> same;
	for (int i = 0; i <= 4; i++) {
		cout << "Insira o valor " << i + 1 << " do vetorA: ";
		cin >> vetorA[i];
		cout << "Insira o valor " << i + 1 << " do vetorB: ";
		cin >> vetorB[i];
	}
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (vetorA[i] == vetorB[j]) {
				same.push_back(vetorA[i]);
				break;
			}
		}
	}
	if (same.empty()) {
		cout << "Nenhum valor igual.";
	}
	else {
		for (int i = 0; i < same.size(); i++) {
			cout <<"Valores iguais: "<< same[i] << "\n";
		}
	}
}