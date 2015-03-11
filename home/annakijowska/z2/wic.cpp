#include <iostream>
using namespace std;

int n;

int wicemistrz(int t[])
{
    int i, j, temp;

    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (t[j] > t[i])
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }

    return t[1];
}

int main()
{
    cin >> n;

    int i;    ;
    int t[n];

    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    cout << wicemistrz(t) << endl;
}
