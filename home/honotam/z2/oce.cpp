#include <iostream>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;

    unsigned int i, t[n], oceny[6]; // dwie tablice, jedna po której sie przesuwamy
                                    // i druga do ktorej wpisujemy wunik, ma 6 miejsc
    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    for (i = 0; i <= 5; i++)
        oceny[i] = 0;

    for (i = 0; i <= n - 1; i++)
        oceny[t[i] - 1]++;

    for (i = 0; i <= 5; i++)
        cout << oceny[i] << " ";

    cout << endl;
}
