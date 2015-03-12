#include <iostream>
using namespace std;

int main()
{
    unsigned int n, i, tmp;
    cin >> n;
    unsigned int a[n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    for (i = 0; i <= n - 2; i++)
    {
        tmp = a[i + 1];
        while (tmp != 0)
        {
            a[i + 1] = tmp;
            tmp = max(a[i], a[i + 1]) % min(a[i], a[i + 1]);
        }
        a[i + 1] = min(a[i], a[i + 1]);
    }
    cout << a[n - 1] << endl;
}
