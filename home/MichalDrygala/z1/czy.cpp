#include <iostream>
using namespace std;

int main() {
   long long i, k = 0;
   cin >> i;

    while (i != 1 && k != 10000000)
    {k++;
    if (i % 2 == 0)
        i = i / 2;
    else
        i = 3 * i + 3;
    }

    if (k < 10000000)
        cout << "TAK";
    else
        cout << "NIE";
}
