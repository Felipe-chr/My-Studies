#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 51; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Divisivel por 3 e 5: " << i << endl;
        }
    }
    return 0;
}

