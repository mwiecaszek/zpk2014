#include <iostream>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;
    unsigned int i, t[n], oc[6];
    for (i = 0; i <= n - 1; i++)
        cin >> t[i];
    for (i = 0; i <= 5; i++)
        oc[i] = 0;
    for (i = 0; i <= n - 1; i++)
        oc[t[i] - 1]++;
    for (i = 0; i <= 5; i++)
        cout << oc[i] << " ";
    cout << endl;
}
