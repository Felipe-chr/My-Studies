
#include <iostream>
using namespace std;
int main()
{
	float metros, cent, mili;
	cout << "Digite a quantidade de metros: ";
	cin >> (metros);
	cent = metros * 100.0;
	mili = cent * 10.0;
	cout << metros << " equivalem a: " << cent << " centimetros e " << mili << " milimetros.";
}
