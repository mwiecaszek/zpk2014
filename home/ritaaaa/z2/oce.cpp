#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, t[n], ile[6];
    for (i = 0; i <= n - 1; i++)
        cin >> t[i];

    for (i = 0; i <= 5; i++)
        ile[i] = 0;

    for (i = 0; i <= n - 1; i++)
        ile[t[i] - 1]++;

    for (i = 0; i <= 5; i++)
        cout << ile[i] << " ";

    cout << endl;
}
