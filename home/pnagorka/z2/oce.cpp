#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;

    unsigned int i, t[n], ile_ocen[6];
    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    for (i = 0; i <= 5; i++)
        ile_ocen[i] = 0;

    for (i = 0; i <= n - 1; i++)
        ile_ocen[t[i] - 1]++;

    for (i = 0; i <= 5; i++)
        cout << ile_ocen[i] << " ";

    cout << endl;
}
