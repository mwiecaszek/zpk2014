#include <iostream>
using namespace std;

int main()
{
    unsigned int n, x, i;
    cin >> n >> x;

    unsigned int t[n];
    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    int wynik1 = -1, wynik2 = -1;

    for (i = 0; i <= n - 1; i++)
    {
        if (t[i] == x && wynik1 == -1)
        {
            wynik1 = i + 1;
            wynik2 = wynik1;
        }
        else if (t[i] == x)
            wynik2 = i + 1;
    }

    cout << wynik1 << " " << wynik2 << endl;
}
