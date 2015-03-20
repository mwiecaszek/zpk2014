#include <iostream>
using namespace std;

int main()
{
    unsigned int n, i, temporary;
    cin >> n;

    unsigned int a[n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];

    for (i = 0; i <= n - 2; i++)
    {
        temporary = a[i + 1];
        while (temporary != 0)
        {
            a[i + 1] = temporary;
            temporary = max(a[i], a[i + 1]) % min(a[i], a[i + 1]);
        }
        a[i + 1] = min(a[i], a[i + 1]);
    }

    cout << a[n - 1] << endl;
}
