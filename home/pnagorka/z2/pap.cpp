#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned int k, i, wynik = 0;
    cin >> k;

    unsigned int t[k + 1];
    for (i = 0; i <= k; i++)
        cin >> t[i];

    for (i = 0; i <= k; i++)
        wynik = wynik + t[i] * pow(2, i);

    cout << wynik + 1 << endl;
}
