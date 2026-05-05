

#include <iostream>
using namespace std;
int main()
{
	int dia, hora, min, seg;
	cout << "Quantos dias: ";
	cin >> (dia);
	hora = dia*24;
	min = hora * 60;
	seg = min * 60;
	cout << dia << " dias equivalem a: " << hora << " horas." << endl;
	cout << min << " minutos." << endl;
	cout << seg << " segundos." << endl;
}
