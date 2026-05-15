#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	double	raiz1=0,raiz2=0,delta = 0;
	;
   cout << "Digite o valor de a: \n";
   cin >> a;
   cout << "Digite o valor de b: \n";
   cin >> b;
   cout << "Digite o valor de c: \n";
   cin >> c;
  delta = pow(b, 2) - (4 * a * c);
  cout << "O valor de delta equivale a: " << delta<<"\n";
  if (delta >= 0) {
	  raiz1 = (-b + sqrt(delta)) / 2 * a;
	  raiz2 = (-b - sqrt(delta)) / 2 * a;
	  cout << "Os valores das raizes sao respectivamentes: " << raiz1 << " e " << raiz2 << ".";
  }
  else {
	  cout << "O valor de delta tem que ser maior que zero.";
  }
}
