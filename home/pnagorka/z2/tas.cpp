#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n], i, j, wynik = 0;

    for (i = 0; i <= n - 1; i++)
        cin >> a[i];

    i = 0;

    while (i <= n - 2 && n - 1 - i > wynik)
    {
        j = n - 1;
        while (j >= i + 1 && j - i > wynik)
        {
            if (a[i] != a[j])
            {
                wynik = j - i;
                j = i + 1;
            }
            j--;
        }
        i++;
    }

    if (wynik == 0)
        cout << "BRAK" << endl;
    else
        cout << wynik << endl;
}
