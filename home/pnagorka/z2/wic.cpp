#include <iostream>
using namespace std;

int n;

int najwieksza_mniejsza(int t[], int m)
{
    unsigned int i, j, temporary;

    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (t[j] > t[i])
            {
                temporary = t[i];
                t[i] = t[j];
                t[j] = temporary;
            }
        }
    }

    return t[m - 1];
}

int main()
{
    cin >> n;

    int i, t[n], m = 2;

    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    cout << najwieksza_mniejsza(t, m) << endl;
}
